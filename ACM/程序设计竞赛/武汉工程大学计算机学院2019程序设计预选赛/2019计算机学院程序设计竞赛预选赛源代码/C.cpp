// O(n)
# include <iostream>	// kcxz

int a[105];
 
int main() {
    int T;
    std::cin >> T;
     
    while (T--) {
        int n;
        std::cin >> n;
        for (int i=0; i<n; i++) {
            std::cin >> a[i];
        }
         
        int t = 0;
        int max = 0;
        int left = 0;
        int right = n-1;
        for (int i=0; i<n; i++) {
        	if (left > right) {
        		break;	
			}
			
			t = std::min(a[left], a[right]) * (right - left);
			if (t > max) {
				max = t;
			} 
			
			if (a[left] < a[right]) {
				left++;
			} else {
				right--;
			} 
        }
         
        std::cout << max << std::endl;
    }
     
    return 0;
} 

// O(n^2)
//# include <iostream>	
// 
//int a[105];
// 
//int main() {
//    int T;
//    std::cin >> T;
//     
//    while (T--) {
//        int n;
//        std::cin >> n;
//        for (int i=0; i<n; i++) {
//            std::cin >> a[i];
//        }
//         
//        int t = 0;
//        int max = 0;
//        for (int i=0; i<n; i++) {
//            for (int j=i+1; j<n; j++) {
//                t = std::min(a[j], a[i]) * (j-i);
//                if (t > max) {
//                    max = t;
//                }
//            }
//        }
//         
//        std::cout << max << std::endl;
//    }
//     
//    return 0;
//}
