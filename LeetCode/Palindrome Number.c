bool isPalindrome(int x) {
    if(x < 0){
       return false;
    }else{
        if(x == 0){
            return true;
        }else{
            long n = x;
            long reverso = 0;
            
            while(n > 0){
                long digito = n%10;
                reverso = reverso * 10 + digito;
                n /= 10;
            }

            return reverso == x;
        }
        
    }
    
}
