#pragma once

#include "../Materia/AMateria.hpp"

// typedef struct s_stored {
//   bool allocated;
//   AMateria *materia;
// } t_stored;

typedef struct s_list {
  AMateria *content;
  struct s_list *next;
} t_list;

void ft_lstadd_back(t_list **lst, t_list *obj);

// void ft_lstadd_front(t_list **lst, t_list *obj);

// void ft_lstclear(t_list **lst, void (*del)(void *));

// void ft_lstdelone(t_list *lst, void (*del)(void *));

// void ft_lstiter(t_list *list, void (*f)(void *));

t_list *ft_lstlast(t_list *lst);

// t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list *ft_lstnew(AMateria *obj);

// int ft_lstsize(t_list *lst);