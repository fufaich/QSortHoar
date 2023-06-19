template<typename T>
void swap(T* left, T* right){
    T tmp = *left;
    *left = *right;
    *right = tmp;
}

template<typename T>
void SortHoar(T* begin, T* end){
    if(begin > end){
        return;
    }
    size_t size = static_cast<size_t>(end - begin);
    T* pivot = begin + size / 2;
    T* i = begin;
    T* j = end;
    while (i <= j)
    {
        while(*i < *pivot) i++;
        while(*j > *pivot) j--;

        if(i <= j){
            swap(i,j);
            i++;
            j--;
        }
    }
    SortHoar(begin,j);
    SortHoar(i,end);
}