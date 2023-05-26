#include "shell.h"

/**
 * input_buf - inabuffer commands ziko chained
 * @info: par_strctr
 * @buf: address ya buffer
 * @len: address ya len_var
 *
 * Return: bytes read
 */
ssize_t input_buf(info_t *info, char **buf, size_t *len)
{
	ssize_t r = 0;
	size_t len_p = 0;

	if (!*len) /* if nothing left in thbuffer, fill it */
	{
		/*bfree((void **)info->cmd_buf);*/
		free(*buf);
		*buf = NULL;
		signal(SIGINT, sigintHandler);
#if USE_GETLINE
		r = getline(buf, &len_p, stdin);
#else
		r = _getline(info, buf, &len_p);
#endif
		if (r > 0)
		{
			if ((*buf)[r - 1] == '\n')
			{
				(*buf)[r - 1] = '\0'; /* remove trailing newline */
				r--;
			}
			info->linecount_flag = 1;
			remove_comments(*buf);
			build_history_list(info, *buf, info->histcount++);
			/* if (_strchr(*buf, ';')) is thiscommand chain? */
			{
				*len = r;
				info->cmd_buf = buf;
			}
		}
	}
	return (r);
}

/**
 * get_input - inaletaline minus thnewline
 * @info: par_strctr
 *
 * Return: bytes read
 */
ssize_t get_input(info_t *info)
{
	static char *buf; /* th';' command chain buffer */
	static size_t i, j, len;
	ssize_t r = 0;
	char **buf_p = &(info->arg), *p;

	_putchar(BUF_FLUSH);
	r = input_buf(info, &buf, &len);
	if (r == -1) /* Eya */
		return (-1);
	if (len) /* we have commands left in thchain buffer */
	{
		j = i; /* init new iterator2current buf position */
		p = buf + i; /* get pointer for return */

		check_chain(info, buf, &j, i, len);
		while (j < len) /* iterate2semicolon or end */
		{
			if (is_chain(info, buf, &j))
				break;
			j++;
		}
		i = j + 1; /* increment past nulled ';'' */
		if (i >= len) /* reached end ya buffer? */
		{
			i = len = 0; /* reset position and length */
			info->cmd_buf_type = CMD_NORM;
		}

		*buf_p = p; /* pass back pointer2current command position */
		return (_strlen(p)); /* return length ya current command */
	}

	*buf_p = buf; /* else notchain, pass back buffer from _getline() */
	return (r); /* return length ya buffer from _getline() */
}

/**
 * read_buf - readsbuffer
 * @info: par_strctr
 * @buf: buffer
 * @i: size
 *
 * Return: r
 */
ssize_t read_buf(info_t *info, char *buf, size_t *i)
{
	ssize_t r = 0;

	if (*i)
		return (0);
	r = read(info->readfd, buf, READ_BUF_SIZE);
	if (r >= 0)
		*i = r;
	return (r);
}

/**
 * _getline - inaleta thnext line ya input from STDIN
 * @info: par_strctr
 * @ptr: address ya pointer2buffer, preallocated or NULL
 * @length: size ya preallocated ptr buffer if not NULL
 *
 * Return: s
 */
int _getline(info_t *info, char **ptr, size_t *length)
{
	static char buf[READ_BUF_SIZE];
	static size_t i, len;
	size_t k;
	ssize_t r = 0, s = 0;
	char *p = NULL, *new_p = NULL, *c;

	p = *ptr;
	if (p && length)
		s = *length;
	if (i == len)
		i = len = 0;

	r = read_buf(info, buf, &len);
	if (r == -1 || (r == 0 && len == 0))
		return (-1);

	c = _strchr(buf + i, '\n');
	k = c ? 1 + (unsigned int)(c - buf) : len;
	new_p = _realloc(p, s, s ? s + k : k + 1);
	if (!new_p) /* MALLOC FAILURE! */
		return (p ? free(p), -1 : -1);

	if (s)
		_strncat(new_p, buf + i, k - i);
	else
		_strncpy(new_p, buf + i, k - i + 1);

	s += k - i;
	i = k;
	p = new_p;

	if (length)
		*length = s;
	*ptr = p;
	return (s);
}

/**
 * sigintHandler - inablock ctrl-C
 * @sig_num: thsignalnumber
 *
 * Return: void
 */
void sigintHandler(__attribute__((unused))int sig_num)
{
	_puts("\n");
	_puts("$ ");
	_putchar(BUF_FLUSH);
}