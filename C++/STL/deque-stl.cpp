#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
    deque<int> dq(k);

    int i;
    for (i = 0; i < k; i++) {
        while (!dq.empty() && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    /* SUMMARY:
        Given arr = [3 4 6 3 4] and k = 2
        First batch = [3 4]
        When i = 0: dq.empty -> skip while loop -> dq.push_back(0) -> dq = [0]
        When i = 1: !dq.empty && arr[1] = 4 >= arr[dq.back()] = 3 -> dq = [1]\
        When i = 2: i = k -> continue
    */

    for ( ; i < n; i++) {
        cout << arr[dq.front()] << " ";
        while (!dq.empty() && dq.front() <= i - k) dq.pop_front();
        while (!dq.empty() && arr[i] >= arr[dq.back()]) dq.pop_back();
        dq.push_back(i);
    }
    /* SUMMARY:
        Given dq = [1] from arr[0] -> arr[k], we now need to process arr[k] -> arr[n] one by one
        When i = 2: Print arr[dq.front()=1] = 4 -> dq.front()=1 is not <= 2-2=0 -> Not out of this window
                    -> arr[2]=6 >= arr[dq.back()=1]=4 -> pop so dq=[] -> push so dq=[2]
        When i = 3: Print arr[dq.front()=2] = 6 -> dq.front()=2 is not <= 3-2=1 -> Not out of this window
                    -> arr[3]=3 is not >= arr[dq.back()=2]=6 -> no pop so dq=[2] -> push so dq=[2 3]
        When i = 4: Print arr[dq.front()=2] = 6 -> dq.front()=2 is <= 4-2=2 -> Pop so dq=[3]
                    -> arr[4]=4 >= arr[dq.back()=3]=3 -> pop so dq=[] -> push so dq=[4]
        When i = 5: i = n -> continue
    */

    cout << arr[dq.front()] << endl;    
}

int main(){
  
    int t;
    cin >> t;
    while(t>0) {
        int n,k;
        cin >> n >> k;
        int i;
        int arr[n];
        for(i=0;i<n;i++)
              cin >> arr[i];
        printKMax(arr, n, k);
        t--;
      }
      return 0;
}
