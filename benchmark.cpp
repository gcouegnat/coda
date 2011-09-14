#include <coda/coda.h>
using namespace coda;

// #include <armadillo>
// #include <eigen3/Eigen/Dense>

#define N 32
#define NREPEAT 1000000


int main (int argc, char const *argv[])
{
	set_log_level(INFO);
	
	Matrix A(N,N), B(N,N);
	Vector x(N), y(N), z(N);
	
	A=1.0;	B=2.0;
	x=1.0;	y=1.0;	z=1.0;

	Timer timer("matvec (template)");
	timer.start();
	for(int i=0; i < NREPEAT; ++i)
	{
		y=A*x+B*z;
	}
	timer.stop();

	timer.rename("matvec (cblas)");
	z=0.0;
	timer.start();

	for(int i=0; i < NREPEAT; ++i)
	{
		y.matvec(A,x);
		Vector tmp(N);
		tmp.matvec(B,z);
		y+=tmp;
	}
	timer.stop();

	// timer.rename("matvec (C hardcoded)");
	// 	z=0.0;
	// 	timer.start();
	// 	for(int i=0; i < NREPEAT; ++i)
	// 	{
	// 		for(int j=0; j<N; ++j)
	// 		{
	// 			float tmp=0.0;
	// 			for(int k=0;k<N;++k)
	// 			{
	// 				tmp+= A(j,k)*x[k]+ B(j,k)+z[k];
	// 			}
	// 			z[j]=tmp;
	// 		}
	// 
	// 	}
	// 	timer.stop();
	

	// timer.rename("matvec (arma)");
	// arma::mat AA(N,N);
	// arma::mat BB(N,N);	
	// arma::vec xx(N);
	// arma::vec yy(N);
	// arma::vec zz(N);
	// AA.fill(1.0);
	// BB.fill(2.0);
	// xx.fill(1.0);
	// yy.fill(1.0);
	// zz.fill(1.0);
	// timer.start();
	// for(int i=0; i < NREPEAT; ++i)
	// {
	// 	yy=AA*xx+BB*zz;
	// }
	// timer.stop();
	// 
	// timer.rename("matvec (eigen)");
	// Eigen::MatrixXd AAA(N,N);
	// Eigen::MatrixXd BBB(N,N);
	// Eigen::VectorXd xxx(N);
	// Eigen::VectorXd yyy(N);
	// Eigen::VectorXd zzz(N);
	// // AAA=1.0;
	// // BBB=2.0;
	// // xxx=1.0;
	// // yyy=1.0;
	// // zzz=1.0;
	// timer.start();
	// for(int i=0; i < NREPEAT; ++i)
	// {
	// 	yyy=AAA*xxx+BBB*zzz;
	// }
	// timer.stop();
	
	
	
	
	
	
	return 0;
}