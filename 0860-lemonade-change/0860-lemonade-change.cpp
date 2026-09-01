class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int five=0,ten=0;
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                five++;
            }
            else if(bills[i]==10){
                //change dena padega 5 rs:-
                if(five>0){
                    five--;
                    ten++;
                }
                else{
                    return false;
                }
            }
            else{
                //20 rs ka note dene se uss person ko change me 15 rs dena padega 2 option hai
                //1) 10 & 5 ka note and 2) 5 rs ke 3 note
                if(ten>0){
                    ten--;
                    if(five==0)
                    return false;
                    five--;
                }
                else{
                  if(five<3)
                  return false;
                  five=five-3;
                }
            }
        }
        return true;
    }
};