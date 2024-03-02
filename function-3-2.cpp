int min_element(int array[], int n){
    int total = 0;
    if(n>0){
        total = array[0];
        for(int i = 0; i<n; i++){
            if(array[i]<total){
                total = array[i];
            }
        }       
    }
    return total;
}

int max_element(int array[], int n){
    int total = 0;
    if(n>0){
        total = array[0];
        for(int i = 0; i<n; i++){
            if(array[i]>total){
                total = array[i];
            }
        }       
    }
    return total;
}

void set_min_element(int array[], int n){
    int total = 0;
    if(n>0){
        total = 0;
        for(int i = 0; i<n; i++){
            if(array[i]<array[total]){
                total = i;
            }
        }       
    }
    array[total] = max_element(array, n);
}

int median_array(int array[], int n){
    int median = 0;
    if(n%2!=0){
        int sortedArray[n];
        for(int i = 0; i<n; i++){
            sortedArray[i] = min_element(array, n);
            set_min_element(array, n);
        }
        median = sortedArray[n/2+n%2];
    }
    return median;
}