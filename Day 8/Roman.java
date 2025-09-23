class Solution {
    public int titleToNumber(String columnTitle) {
        int len = columnTitle.length(),j=0,res=0;
        while(len>0){
            int c = (int)columnTitle.charAt(j)-64;
            res=res*26+c;
            len--;
            j++;
        }
        return res;
    }
}