bool is_palindrome(int integers[], int length){
    if(length<1){
        return false;
    }
    else{
        for(int i=0; i<length; i++){
            if(integers[i]!=integers[length-i-1]){
                return false;
            }
        }
    }
    return true;
}

int sum_array_elements(int integers[], int length){
    if(length<1){
        return -1;
    }
    else{
        int sum = 0;
        for(int i=0; i<length; i++){
            sum+=integers[i];
        }
        return sum;
    }
}

int sum_if_palindrome(int integers[], int length){
    if(length>1){
        if(is_palindrome(integers, length)){
            return sum_array_elements(integers, length);
        }
        else{
            return -2;
        }
    }
    else{
        return -1;
    }
}