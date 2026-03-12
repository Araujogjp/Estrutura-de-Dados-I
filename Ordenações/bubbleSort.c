void bubbleSort(int *x, int n){
    int i, troca, aux;
    
    do{
       troca = 0;
       for(i=0; i<n-1; i++){
           if(x[i]>x[i+1]){
               aux = x[i];
               x[i] = x[i+1];
               x[i+1] = aux;
               troca = 1;
           }
       }
    }while(troca);
}
