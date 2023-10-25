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

void ft_lstadd_front(t_list **lst, t_list *obj) {
  obj->next = *lst;
  *lst = obj;
}

void ft_lstclear(t_list **lst, void (*del)(void *)) {
  t_list *temp;

  temp = *lst;
  while (*lst) {
    *lst = (*lst)->next;
    del(temp->content);
    delete temp;
    temp = *lst;
  }
}

void ft_lstdelone(t_list *lst, void (*del)(void *)) {
  t_list *temp;

  temp = lst;
  lst = lst->next;
  del(temp->content);
  delete temp;
}

void ft_lstiter(t_list *list, void (*f)(void *)) {
  while (list) {
    f(list->content);
    list = list->next;
  }
}

t_list *ft_lstlast(t_list *lst) {
  if (lst == NULL) return (NULL);
  while (lst->next != NULL) {
    lst = lst->next;
  }
  return (lst);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
  t_list *obj;
  t_list *out;
  t_list *tail;

  if (!lst || !f || !del) return (NULL);
  out = NULL;
  obj = ft_lstnew(f(lst->content));
  ft_lstadd_back(&out, obj);
  tail = out;
  lst = lst->next;
  while (lst) {
    obj = ft_lstnew(f(lst->content));
    if (obj == NULL) {
      ft_lstclear(&out, del);
      return (NULL);
    }
    ft_lstadd_back(&tail, obj);
    lst = lst->next;
    tail = tail->next;
  }
  return (out);
}

t_list *ft_lstnew(void *content) {
  t_list *line;

  line = new t_list;
  if (!line) return (NULL);
  line->content = content;
  line->next = NULL;
  return (line);
}

int ft_lstsize(t_list *lst) {
  int i;
  t_list *current;

  i = 0;
  current = lst;
  while (current != NULL) {
    current = current->next;
    i++;
  }
  return (i);
}