ll findNumSmall(ll N, ll K)
{
    ll rem = (N + K) % K;
    
    if (rem == 0)
        return N;
    else
        return N + K - rem;
}

ll findNumBig(ll N, ll K)
{
    ll rem = N % K;
    
    if (rem == 0)
        return N;
    else
        return N - rem;
}

