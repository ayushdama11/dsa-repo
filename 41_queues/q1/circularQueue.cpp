// ** leetcode 622

// class MyCircularQueue {
// public:
//     int f;  // front
//     int b;  // back / rear
//     int s;  // current size
//     int c;  // capacity - itna hi max fill kar sakte hai 
//     vector<int> arr;

//     MyCircularQueue(int k) {    // k is max size
//         f = 0;
//         b = 0;
//         s = 0;
//         c = k;
//         vector<int> v(k);
//         arr = v;
//     }
    
//     bool enQueue(int val) {   // push back
//         if(s==c) return false;  // if size reaches capacity - return false
//         arr[b] = val;
//         b++;
//         if(b==c) b = 0;     // jb size capacity k barabar na ho and hmne pehle wale ele pop krdie ho
//         s++;
//         return true;
//     }
    
//     bool deQueue() {    // pop front
//         if(s==0) return false;
//         f++;
//         if(f==c) f=0;   // first idx p le aao agar front mera k ke barabar ho jae
//         s--;
//         return true;
//     }
    
//     int Front() {   
//         if(s==0) return -1;
//         return arr[f];
//     }
    
//     int Rear() {    // back
//         if(s==0) return -1;
//         if(b==0) return arr[c-1];   // agr b first idx pe ho , (capacity-1) return krdo
//         return arr[b-1];
//     }
    
//     bool isEmpty() {    // empty
//         if(s==0) return true;
//         else return false;
//     }
    
//     bool isFull() {     // s == k - true
//         if(s==c) return true;
//         else return false;
//     }
// };