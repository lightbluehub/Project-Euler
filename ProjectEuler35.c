#include<stdio.h>
#include<math.h>

int isprime(int n) {
	// Neu n < 2 thi khong phai la SNT
	if (n < 2) {
		return 0;
	}

	// Neu n = 2 la SNT
	if (n == 2) {
		return 1;
	}

	// Neu n la so chan thi khong phai la SNT
	if (n % 2 == 0) {
		return 0;
	}

	// Lap qua cac so le
	for (int i = 3; i < (n - 1); i += 2) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	unsigned int n, count = 0;

	for (n = 2; n < 1000000; n++) {
		unsigned int i, a, b;
		if (!isprime(n)) {// neu khong phai snt bo qua phan con lai
			continue;
		}
		a = log10(n);// lay phan nguyen
		b = n;
		for (i = 0; i < a; i++) {// lap tim cac truong hop
			unsigned int r1 = pow(10, a);//tim so chia sao cho chi lay du duoc chu so đau tien
			unsigned int r2 = b % r1;
			b /= r1;
			b += r2 * 10;
			if (!isprime(b)) {// neu b khong la snt nhay den OUT lap lai vong for cho n
				goto OUT;
			}
		}
		count++;// kiem tra het cac so nguyen to b het vong for cho i tang bien dem len 1
	OUT:;
	}
	printf("%u\n", count);

	return 0;
}
//ta có độ dài của số là L(n)=[1+log10(n)](số chữ số)
//lấy n-1 chữ số từ phải sang trái ta có r2=n%(10^(log10(n))
//Lấy chữ số đầu tiên ta có b=n/10^log10(n)
//chuyển các n-1 chữ số đó lên đầu rồi chữ số đầu tiên xuống cuối bằng cách nhân 10 cho số có n-1
// rồi cộng với chữ số đầu tiên vừa lấy ra cứ như thế lần lượt các số được tạo ra bằng cách đảo chữ số đầu tiên cuống cuối


















