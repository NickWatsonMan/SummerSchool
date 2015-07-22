#include <cstdio>
#include <iostream>

using namespace std;

const int ml = 1000010;
int sum[ml], cnt[ml];

int main()
{
    int counter=0;
    int n, S;
    int a[100];
    cin >> n;
    for(int i=0; i < n; ++i)
        cin >> a[i];
    cin >> S;
    fill(sum, sum + ml, -1);
    fill(cnt, cnt + ml, ml);
    cnt[0] = 0;
    for(int i=0; i < S; ++i)
        if(cnt[i] < ml)
            for(int j=0; j < n; ++j)
                if(i + a[j] < ml && cnt[i + a[j]] > cnt[i] + 1) {
                    cnt[i + a[j]] = cnt[i] + 1;
                    sum[i + a[j]] = i;
                }
    if(cnt[S] == ml) cout <<-1;
    else {
        int j = S;
        while(sum[j] != -1) {
            counter++;
            j = sum[j];
        }
        cout <<counter<<endl;
        j=S;
        while(sum[j] != -1) {
            cout <<j - sum[j] << " ";
            j = sum[j];
        }
    }
    return 0;
}
