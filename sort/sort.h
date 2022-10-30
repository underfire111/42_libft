#if !defined(SORT_H)
#define SORT_H

void	ft_bubblesort(void *arr, int arr_size, int elem_size, int(*op)(void *, void *));

int		ft_issorted(void *arr, int arr_size, int elem_size, int(*op)(void *, void *));

void	ft_quicksort(void *arr, int arr_size, int elem_size, int(*op)(void *, void *));

void	ft_selectionsort(void *arr, int arr_size, int elem_size, int(*op)(void *, void *));

void	ft_swap(void *, void *, int size);

#endif // SORT_H
