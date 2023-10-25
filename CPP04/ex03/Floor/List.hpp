#pragma once

#ifndef NULL
#define NULL 0
#endif

typedef struct s_list {
  void *content;
  struct s_list *next;
} t_list;

void ft_lstadd_back(t_list **lst, t_list *obj);

void ft_lstadd_front(t_list **lst, t_list *obj);

void ft_lstclear(t_list **lst, void (*del)(void *));

void ft_lstdelone(t_list *lst, void (*del)(void *));

void ft_lstiter(t_list *list, void (*f)(void *));

t_list *ft_lstlast(t_list *lst);

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list *ft_lstnew(void *content);

int ft_lstsize(t_list *lst);