class Solution {
    int rom_val(char ch){
        if(ch=='I') return 1;
        else if(ch=='V') return 5;
        else if(ch=='X') return 10;
        else if(ch=='L') return 50;
        else if(ch=='C') return 100;
        else if(ch=='D') return 500;
        else return 1000;
    }
    public int romanToInt(String s) {
        int sum=rom_val(s.charAt(s.length()-1));
        for(int i=s.length()-1;i>0;i--){
            int val1 = rom_val(s.charAt(i));
            int val2 = rom_val(s.charAt(i-1));
            if(val1>val2) sum-=val2;
            if(val1<=val2) sum=sum+val2;
        }
        return sum;
    }
}