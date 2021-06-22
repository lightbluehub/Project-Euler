#include<stdio.h>
#include<math.h>

int ucln(int t, int m)//ham tim uoc chung lon nhat
{
	t = abs(t);
	m = abs(m);
	if (t * m == 0)
		return 1;
	while (t != m) {
		if (t > m)
			t -= m;
		else 
			m -= t;
		return t;
	}
}
int rutgon(int t, int m)// ham rut gon phan so de duoc phan so toi gian
{
	int u;
	u= ucln(t, m);
	t = t / u;
	m = m / u;
	return m;// tra ve gia tri mau so

}
int main()
{
	int t = 1;//tu so
	int m = 1;//mau so

	for (int i = 1; i < 10; i++) {
		for (int d = 1; d < i; d++) {
			for (int n = 1; n < d; n++){
				if ((i * 10 + n) * d == n * (d * 10 + i)) {//(10i+n)/(10d+i)=n/d
					t *= n;
					m *= d;
				}
				if ((n * 10 + i) * d == n * (i * 10 + d)) {//(10n+i)/(10i+d)=n/d
					 t *= n;
					 m *= d;
				}
			}
		}
	}
	printf("gia tri mau la: %d ", rutgon(t,m));

	return 0;
}