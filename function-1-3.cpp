int num_count(int array[], int n, int number){
    int total = 0;
    if(n>0){
        for(int i = 0; i<n; i++){
            if(array[i] == number){
                total++;
            }
        }
    }
    return total;
}