double sum_even(double array[], int n){
    double total = 0.0;
    if(n>0){
        for(int i=0; i<n; i++){
            if(i%2==0){
                total+=array[i];
            }
        }
    }
    return total;
}