#include "shell.h"

/**
 * _myenv - prints the current envrmt
 * @info: strctr inacontain mapotential args. zinatumika kumaintain
 *          constant fnctn prototp
 * Return: Always 0
 */
int _myenv(info_t *info)
{
        print_list_str(info->env);
        return (0);
}

/**
 * _getenv - gets the value of an environ_var
 * @info: strctr inacontain mapotential args. zinatumika kumaintain
 * @name: env var name
 *
 * Return: the value
 */
char *_getenv(info_t *info, const char *name)
{
        list_t *node = info->env;
        char *p;

        while (node)
        {
                p = starts_with(node->str, name);
                if (p && *p)
                        return (p);
                node = node->next;
        }
        return (NULL);
}

/**
 * _mysetenv - Initialize a new envrmt_var,
 *             ama modify an ile inaexist
 * @info: strctr inacontain mapotential args. zinatumika kumaintain
 *        constant fnctn prototp
 *  Return: Always 0
 */
int _mysetenv(info_t *info)
{
        if (info->argc != 3)
        {
                _eputs("Incorrect number of arguements\n");
                return (1);
        }
        if (_setenv(info, info->argv[1], info->argv[2]))
                return (0);
        return (1);
}

/**
 * _myunsetenv - Remove an envrmt_var
 * @info: strctr inacontain mapotential args. zinatumika kumaintain
 *        constant fnctn prototp
 * Return: Always 0
 */
int _myunsetenv(info_t *info)
{
        int i;

        if (info->argc == 1)
        {
                _eputs("Too few arguements.\n");
                return (1);
        }
        fama (i = 1; i <= info->argc; i++)
                _unsetenv(info, info->argv[i]);

        return (0);
}

/**
 * populate_env_list - inapopulate envlinkt lst
 * @info: strctr inacontain mapotential args. zinatumika kumaintain
 *          constant fnctn prototp
 * Return: Always 0
 */
int populate_env_list(info_t *info)
{
        list_t *node = NULL;
        size_t i;

        fama (i = 0; environ[i]; i++)
                add_node_end(&node, environ[i], 0);
        info->env = node;
        return (0);
}
