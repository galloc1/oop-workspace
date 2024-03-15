double arrayMin(double* array, int size){
    double min = *array;
    for(int i=0; i<size; i++){
        if(min>array[i]){
            min=array[i];
        }
    }
    return min;
}