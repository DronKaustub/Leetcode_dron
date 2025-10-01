// class Solution {
// public:
//     int numWaterBottles(int numBottles, int numExchange) {
//         int sum=numBottles;
//         int extra=0;
//         while(numBottles>0 ){
            
//             extra+=numBottles%numExchange;
//             sum+=numBottles/numExchange;
//             numBottles/=numExchange;
            
//             if(extra>=numExchange){
//                 sum+=extra/numExchange;
//                 if(numBottles<=0){break;}
//                 numBottles+=(extra/numExchange);
//                 extra/=numExchange;
//             }
            
//             cout<<"sum : "<<sum<<" numBottles : "<<numBottles<<" extra : "<<extra <<" numberofexc : "<<numExchange<<endl;
            
//         }
//         return sum;
//     }
// };
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        return numBottles + (numBottles - 1) / (numExchange - 1);
    }
};
/*
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;  // Initially drink all bottles
        int emptyBottles = numBottles;  // All become empty
        
        while (emptyBottles >= numExchange) {
            int newBottles = emptyBottles / numExchange;  // Exchange for new bottles
            total += newBottles;  // Drink the new bottles
            
            // Update empty bottles: leftover + newly drunk bottles
            emptyBottles = emptyBottles % numExchange + newBottles;
        }
        
        return total;
    }
};
*/