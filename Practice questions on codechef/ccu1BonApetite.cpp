#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
typedef long long ll;

inline void get_positive(ll &num)
{
    num=0;
    auto c = (char) getchar();
    //skip all non-digit chars
    while(c<'0' || c>'9')
        c = (char) getchar();
    while(c>='0' && c<='9')
    {
        num = num*10 + (c-'0');
        c = (char) getchar();
    }
}

int main()
{
    ll T, N, K, s, f, p;

    get_positive(T);


    unordered_map<ll, vector<pair<ll,ll>>> vals;
    
    while(T--)
    {
        vals.clear();
        get_positive(N);
        get_positive(K);

        ll area=0;

        for (int j=0; j < N; ++j)
        {
            get_positive(s);
            get_positive(f);
            get_positive(p);

            auto it=vals.find(p);

            if(it!=vals.end())
                (*it).second.emplace_back(s,f);
            else
            {
                vector<pair<ll,ll>> vv;
                vv.emplace_back(s,f);
                vals.insert(pair<ll, vector<pair<ll,ll>>>(p, vv));;
            }
        }

        ll count=0;

        for (auto &val : vals) {
            vector<pair<ll,ll>>& vv= val.second;

            sort(vv.begin(), vv.end(), [](const pair<ll,ll> &lhs, const pair<ll,ll> &rhs) {
                return lhs.second < rhs.second;
            });
            ll freeTime=0;
            for(auto& cust : vv)
            {
                if(cust.first>=freeTime)
                {
                    ++count;
                    freeTime=cust.second;
                }
            }
        }
        
        printf("%llu\n", count);
    }
    
    return 0;
}
