bool is_ascending(int array[], int n){
    bool asc = true;
    int prevnum = 0;
    if(n>0){
        prevnum = array[0];
        for(int i=1; i<n; i++){
            if(prevnum>array[i]){
                asc = false;
                break;
            }
            prevnum = array[i];
        }
    }
    else{
        asc = false;
    }
    return asc;
}

bool is_fanarray(int array[], int n){
    bool isfan = true;
    int centre = n/2+n%2-1;
    int comparrayf[centre+1];
    int comparrayb[centre+1];
    if(n>0){
        for(int i=0; i<=centre; i++){
            comparrayf[i] = array[i];
        }
        if(!is_ascending(comparrayf, centre+1)){
            isfan=false;
        }
        int count = 0;
        for(int i=n-1; i>=centre; i--){
            comparrayb[count] = array[i];
            count++;
        }
        for(int i=0; i<=centre; i++){
            if(comparrayf[i]!=comparrayb[i]){
                isfan = false;
                break;
            }
        }
    }
    else{
        isfan = false;
    }
    return isfan;
}