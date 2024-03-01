double weighted_average(int array[], int n){
    double total = 0.0;
    if(n>0){
        for(int i=0; i<n; i++){
            int numcount = 0;
            for(int j=0; j<n; j++){
                if(array[i]==array[j]){
                    numcount++;
                }
            }
            total+=array[i]*(numcount/static_cast<double>(n));
        }
    }
    return total;
}