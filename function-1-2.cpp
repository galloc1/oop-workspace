double array_mean(int array[], int n){
    double total = 0.0;
    if(n>0){
        for(int i = 0; i<n; i++){
        total+=array[i];
        }
        total /= n;
    }
    return total;
}