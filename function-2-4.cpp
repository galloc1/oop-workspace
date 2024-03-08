int array_min(int integers[], int length){
    int total = 0;
    if(length>0){
        total = integers[0];
        for(int i = 0; i<length; i++){
            if(integers[i]<total){
                total = integers[i];
            }
        }       
    }
    else{
        return -1;
    }
    return total;
}

int array_max(int integers[], int length){
    int total = 0;
    if(length>0){
        total = integers[0];
        for(int i = 0; i<length; i++){
            if(integers[i]>total){
                total = integers[i];
            }
        }       
    }
    else{
        return -1;
    }
    return total;
}

int sum_min_max(int integers[], int length){
    return array_min(integers, length)+array_max(integers, length);
}