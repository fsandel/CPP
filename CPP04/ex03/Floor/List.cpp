#include "List.hpp"

void ft_lstadd_back(t_list **lst, t_list *obj) {
  t_list *temp;

  if (!obj) return;
  if (!*lst) {
    *lst = obj;
    return;
  }
  temp = ft_lstlast(*lst);
  temp->next = obj;
}

t_list *ft_lstlast(t_list *lst) {
  if (lst == NULL) return (NULL);
  while (lst->next != NULL) {
    lst = lst->next;
  }
  return (lst);
}

t_list *ft_lstnew(AMateria *obj) {
  t_list *line;

  line = new t_list;
  if (!line) return (NULL);
  line->content = obj;
  line->next = NULL;
  return (line);
}
