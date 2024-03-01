int count_evens(int number){
    int total = 0;
    for(int i = 2; i<=number; i++){
        if(i%2==0){
            total++;
        }
    }
    return total;
}