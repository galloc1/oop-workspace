int binary_to_int(int binary_digits[], int number_of_digits){
    int num = 0;
    for(int i = 0; i< number_of_digits; i++){
        num += binary_digits[i]*i^2;
    }
    return num;
}