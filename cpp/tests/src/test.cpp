#include <cppQuantFi>
#include <iostream>
#include <string>


int testingVanillaOption(){
    
    VanillaOption s;
    
    std::cout<<"call price: "<<std::endl;
    std::cout<<s.calc_call_price()<<std::endl;
    
    std::cout<<"put price: "<<std::endl;
    std::cout<<s.calc_put_price()<<std::endl;
    
    
    return 0;
}

int testingPayOffs(){
    
    PayOffCall call(90);
    
    std::cout<<call(190)<<std::endl;
    
    
    return 0;
}

int testingMatrix(){
    
    Matrix m;
    Matrix m1(3,3,1);
    
    int row = 1;
    int column = 1;
    std::cout<<m1.value(row,column)<<std::endl;
    
    return 0;
}

int testingFunctors(){
    
    double a = 5.0;
    double b = 10.0;
    
    BinaryFunction* pAdd = new Add();
    BinaryFunction* pMultiply = new Multiply();
    
    std::cout<<binary_op(a, b, pAdd)<<std::endl;
    std::cout<<binary_op(a, b, pMultiply)<<std::endl;
    
    return 0;
}

int testingQSMatrix(){
    
    QSMatrix<double> mat1(10,10,1.);
    QSMatrix<double> mat2(10,10,2.);
    
    QSMatrix<double> mat3 = mat1+mat2;
    
    for (int i = 0; i<mat3.get_rows(); i++){
        for (int j = 0; j<mat3.get_cols(); j++){
            std::cout<<mat3(i,j)<<" ";
        }
        std::cout<<std::endl;
    }
    
    return 0;
}

int testingEigen(){
    
    std::cout<<"====== Eigen library tests: "<<std::endl;
    Eigen::MatrixXd m(3,3);
    
    m << 1,2,3,4,5,6,7,8,9;
    
    std::cout<<m<<std::endl;
    
    std::cout<<"======"<<std::endl;
    
    Eigen::Matrix3d p;
    Eigen::Matrix3d q;
    
    Eigen::Vector3d r(1,2,3);
    Eigen::Vector3d s(4,5,6);
    
    p << 1,2,3,4,5,6,7,8,9;
    q <<10,11,12,13,14,15,16,17,18;
    
    std::cout<<"p+q =\n"<<p+q<<std::endl;
    std::cout<<"p-q =\n"<<p-q<<std::endl;
    
    std::cout<<"r+s =\n"<<r+s<<std::endl;
    std::cout<<"r-s =\n"<<r-s<<std::endl;
    
    std::cout<<"======"<<std::endl;
    
    std::cout<<"p * 3.14159 =\n"<<p*3.14159<<std::endl;
    std::cout<<"p / 2.71828 =\n"<<p/2.71828<<std::endl;
    
    std::cout<<"======"<<std::endl;
    
    Eigen::Matrix3d p1 = Eigen::Matrix3d::Random(3, 3);
    std::cout<<"p1 =\n"<<p1<<std::endl;
    std::cout<<"p1^T =\n"<<p1.transpose()<<std::endl;
    
    p1.transposeInPlace();
    std::cout<<"p1 =\n"<<p1<<std::endl;
    
    std::cout<<"======"<<std::endl;
    
    std::cout<<"p*p=\n"<<p*p<<std::endl;
    std::cout<<"p*r=\n"<<p*r<<std::endl;
    std::cout<<"r^T*p=\n"<<r.transpose()*p<<std::endl;
    std::cout<<"r^T*s=\n"<<r.transpose()*s<<std::endl;
    
    std::cout<<"r . s=\n"<<r.dot(s)<<std::endl;
    std::cout<<"r x s=\n"<<r.cross(s)<<std::endl;
    
    std::cout<<"======"<<std::endl;
    std::cout<<"p.sum=\n";
    std::cout<<p.sum()<<std::endl;
    std::cout<<"p.prod=\n";
    std::cout<<p.prod()<<std::endl;
    std::cout<<"p.mean=\n";
    std::cout<<p.mean()<<std::endl;
    std::cout<<"p.minCoeff=\n";
    std::cout<<p.minCoeff()<<std::endl;
    std::cout<<"p.maxCoeff=\n";
    std::cout<<p.maxCoeff()<<std::endl;
    std::cout<<"p.trace=\n";
    std::cout<<p.trace()<<std::endl;
    
    
    return 0;
}

int testingEigenLU(){
    
    typedef Eigen::Matrix<double, 4,4> Matrix4x4;
    
    Matrix4x4 p;
    
    p<<7,3,-1,2,
    3,8,1,-4,
    -1,1,4,-1,
    2,-4,-1,6;
    
    std::cout<<"\n===========\n";
    std::cout<<"P=\n"<<p<<std::endl<<std::endl;
    Eigen::PartialPivLU<Matrix4x4> lu(p);
    
    std::cout<<"LU Matrix:\n"<<lu.matrixLU()<<std::endl<<std::endl;
    
    Matrix4x4 l = Eigen::MatrixXd::Identity(4,4);
    l.block<4,4>(0,0).triangularView<Eigen::StrictlyLower>() = lu.matrixLU();
    
    std::cout<<"L Matrix:\n"<<l<<std::endl<<std::endl;
    Matrix4x4 u = lu.matrixLU().triangularView<Eigen::Upper>();
    std::cout<<"R Matrix:\n"<<u<<"\n\n";
    
    
    return 0;
}

int testingThomasAlgorithm(){
    
    size_t N = 13;
    
    double delta_x = 1.0/ static_cast<double>(N);
    
    double delta_t = 0.001;
    
    double r = delta_t/(delta_x*delta_x);
    
    std::vector<double> a(N-1, -r/2.);
    std::vector<double> b(N, 1.+r);
    std::vector<double> c(N-1, -r/2.);
    std::vector<double> d(N,0);
    std::vector<double> f(N,0);
    
    f.at(5) = 1; f.at(6) = 2; f.at(7) = 1;
    
    std::cout<<"f = (";
    
    for (int i=0; i<N; i++){
        std::cout<<f.at(i);
        if (i<N-1){
            std::cout<<", ";
        }
    }
    
    std::cout<<")\n\n";
    
    for (int i=1; i<N-1; i++){
        d.at(i) = r*0.5*f.at(i+1)+(1.-r)*f.at(i)+r*0.5*f.at(i-1);
    }
    
    thomas_algorithm(a, b, c, d, f);
    
    std::cout<<"f = (";
    
    for (int i=0; i<N; i++){
        std::cout<<f.at(i);
        if (i<N-1){
            std::cout<<", ";
        }
    }
    
    std::cout<<")\n\n";
    
    return 0;
}

int testingEigenCholesky(){
    
    
    typedef Eigen::Matrix<double, 4,4> Matrix4x4;
    
    Matrix4x4 p;
    
    p<<6,3,4,8,
    3,6,5,1,
    4,5,10,7,
    8,1,7,25;
    
    std::cout<<"p=\n"<<p<<"\n\n";
    Eigen::LLT<Matrix4x4> llt(p);
    
    Matrix4x4 l = llt.matrixL();
    
    std::cout<<"L Matrix:\n"<<l<<"\n\n";
    Matrix4x4 u = l.transpose();
    std::cout<<"L^T Matrix:\n:"<<u<<"\n\n";
    
    std::cout<<"LL^T Matrix:\n"<<l*u<<"\n\n";
    
    return 0;
}

int testingEigenQR(){
    
    Eigen::MatrixXf p(3,3);
    
    p<<12,-51,4,
    6,167,-68,
    -4,24,-41;
    
    std::cout<<"Matrix p:\n"<<p<<"\n\n";
    
    Eigen::HouseholderQR<Eigen::MatrixXf> qr(p);
    Eigen::MatrixXf q = qr.householderQ();
    
    std::cout<<"Matrix q:\n"<<q<<"\n\n";
    
    return 0;
}

int testingEurOptBS(){
    
    double S = 100.;
    double K = 100.;
    double r = 0.05;
    double v = 0.2;
    double T = 1.0;
    
    double call = call_price(S,K,r,v,T);
    double put = put_price(S,K,r,v,T);
    
    std::cout<<"call : "<<call<<std::endl;
    std::cout<<"put : "<<put<<std::endl;
    
    
    return 0;
}

int testingEurOptMC(){
    
    int num_sims = 10000000;
    double S = 100.;
    double K = 100.;
    double r = 0.05;
    double v = 0.2;
    double T = 1.0;
    
    double call = monte_carlo_call_price(num_sims,S,K,r,v,T);
    double put = monte_carlo_put_price(num_sims,S,K,r,v,T);
    
    std::cout<<"Number of sims : "<<num_sims<<std::endl;
    std::cout<<"call : "<<call<<std::endl;
    std::cout<<"put : "<<put<<std::endl;
    
    return 0;
}


int testingEurOptGreeksBS(){
    
    double S = 100.;
    double K = 100.;
    double r = 0.05;
    double v = 0.2;
    double T = 1.0;
    
    double call = call_price(S,K,r,v,T);
    double put = put_price(S,K,r,v,T);
    
    std::cout<<"call : "<<call<<std::endl;
    std::cout<<"put : "<<put<<std::endl;
    
    double call_delta_ = call_delta(S, K, r, v, T);
    double call_gamma_ = call_gamma(S, K, r, v, T);
    double call_vega_ = call_vega(S, K, r, v, T);
    double call_theta_ = call_theta(S, K, r, v, T);
    double call_rho_ = call_rho(S, K, r, v, T);
    
    double put_delta_ = put_delta(S, K, r, v, T);
    double put_gamma_ = put_gamma(S, K, r, v, T);
    double put_vega_ = put_vega(S, K, r, v, T);
    double put_theta_ = put_theta(S, K, r, v, T);
    double put_rho_ = put_rho(S, K, r, v, T);
    
    std::cout<<"==================\n";
    
    std::cout<< "Underlying : "<<S<<std::endl;
    std::cout<< "Strike : "<<K<<std::endl;
    std::cout<< "Risk-Free Rate : "<<r<<std::endl;
    std::cout<< "Volatility : "<<v<<std::endl;
    std::cout<< "Maturity : "<<T<<std::endl;
    
    std::cout<<"==================\n";
    
    std::cout<<"Greeks for call :\n";
    std::cout<< "delta : "<<call_delta_<<std::endl;
    std::cout<< "gamma : "<<call_gamma_<<std::endl;
    std::cout<< "vega: "<<call_vega_<<std::endl;
    std::cout<< "theta : "<<call_theta_<<std::endl;
    std::cout<< "rho : "<<call_rho_<<std::endl;
    
    std::cout<<"==================\n";
    
    std::cout<<"Greeks for put :\n";
    std::cout<< "delta : "<<put_delta_<<std::endl;
    std::cout<< "gamma : "<<put_gamma_<<std::endl;
    std::cout<< "vega: "<<put_vega_<<std::endl;
    std::cout<< "theta : "<<put_theta_<<std::endl;
    std::cout<< "rho : "<<put_rho_<<std::endl;

    
    double delta = 0.001;
    
    double call_delta_fdm_ = call_delta_fdm(S, K, r, v, T,delta);
    double call_gamma_fdm_  = call_gamma_fdm(S, K, r, v, T,delta);
    double call_vega_fdm_  = call_vega_fdm(S, K, r, v, T,delta);
    double call_theta_fdm_  = call_theta_fdm(S, K, r, v, T,delta);
    double call_rho_fdm_  = call_rho_fdm(S, K, r, v, T,delta);
    
    double put_delta_fdm_  = put_delta_fdm (S, K, r, v, T,delta);
    double put_gamma_fdm_  = put_gamma_fdm(S, K, r, v, T,delta);
    double put_vega_fdm_  = put_vega_fdm(S, K, r, v, T,delta);
    double put_theta_fdm_  = put_theta_fdm(S, K, r, v, T,delta);
    double put_rho_fdm_  = put_rho_fdm(S, K, r, v, T,delta);
    
    std::cout<<"==================\n";
    
    std::cout<<"Greeks for call with fdm :\n";
    std::cout<< "delta : "<<call_delta_fdm_ <<std::endl;
    std::cout<< "gamma : "<<call_gamma_fdm_ <<std::endl;
    std::cout<< "vega: "<<call_vega_fdm_ <<std::endl;
    std::cout<< "theta : "<<call_theta_fdm_ <<std::endl;
    std::cout<< "rho : "<<call_rho_fdm_ <<std::endl;
    
    std::cout<<"==================\n";
    
    std::cout<<"Greeks for put with fdm :\n";
    std::cout<< "delta : "<<put_delta_fdm_ <<std::endl;
    std::cout<< "gamma : "<<put_gamma_fdm_ <<std::endl;
    std::cout<< "vega: "<<put_vega_fdm_ <<std::endl;
    std::cout<< "theta : "<<put_theta_fdm_ <<std::endl;
    std::cout<< "rho : "<<put_rho_fdm_ <<std::endl;
    
    return 0;
}


int testing_call_GreeksMC(){
    
    
    std::cout<<"Monte Carlo Greeks :) =============\n";
    int num_sims = 10000000;
    double delta = 0.0001;
    double S = 100.;
    double K = 100.;
    double r = 0.05;
    double v = 0.2;
    double T = 1.0;
    
    double call = monte_carlo_call_price(num_sims,S,K,r,v,T);
//    double put = monte_carlo_put_price(num_sims,S,K,r,v,T);
    
    std::cout<<"Number of sims : "<<num_sims<<std::endl;
    std::cout<<"call : "<<call<<std::endl;
    
    double Sp;
    double Sm;
    double Rp;
    double Vp;
    double Tp;
    double S_;
    
    double dS;
    double ddS;
    double dR;
    double dT;
    double dV;
    
    monte_carlo_call_price(num_sims, S, K, r, v,T, delta, Sp,S_,Sm,Rp,Vp,Tp);
    
    monte_carlo_call_greeks(delta,Sp, S_,Sm,Rp,Vp, Tp, dS,ddS, dR,dV,dT);
    
    std::cout<<"Greeks for call with MC :\n";
    std::cout<< "delta : "<<dS <<std::endl;
    std::cout<< "gamma : "<<ddS<<std::endl;
    std::cout<< "vega: "<<dV <<std::endl;
    std::cout<< "theta : "<<dT <<std::endl;
    std::cout<< "rho : "<<dR <<std::endl;
    
    return 0;
}

int testingAsian(){
    
    int num_sims = 100000;
    int num_intervals = 250;
    double S = 30.0;
    double K = 29.0;
    double r = 0.08;
    double v = 0.3;
    double T = 1.0;
    
    std::vector<double> spot_prices(num_intervals, S);
    
    PayOff* pay_off_call = new PayOffCall(K);
    
    AsianOptionArithmetic asian(pay_off_call);
    
    double pay_off_sum = 0;
    
    for (int i = 0; i<num_sims; i++){
        calc_path_spot_prices(spot_prices, r, v, T);
        pay_off_sum += asian.pay_off_price(spot_prices);
    }
    
    double discount_pay_off_avg = (pay_off_sum/static_cast<double>(num_sims))*exp(-r*T);
    
    delete pay_off_call;
    std::cout<<"=========================\n";
    
    std::cout<<"Greeks for call with MC :\n";
    std::cout<< "num Sims : "<<num_sims <<std::endl;
    std::cout<< "num of intervals : "<<num_intervals<<std::endl;
    std::cout<< "Underlying: "<<S <<std::endl;
    std::cout<< "Strike : "<<K <<std::endl;
    std::cout<< "risk free : "<<r <<std::endl;
    std::cout<< "vol : "<<v <<std::endl;
    std::cout<< "maturity : "<<T <<std::endl;
    std::cout<< "Asian price : "<<discount_pay_off_avg <<std::endl;
    
    
    return 0;
}

int testingBisection(){
    
    double S = 100;
    double K = 100;
    double r = 0.05;
    double T = 1.0;
    double C_M = 10.5;
    
    BlackScholesCall bsc(S,K,r,T);
    
    double low_vol = 0.05;
    double high_vol = 0.35;
    
    double epsilon = 0.01;
    
    double sigma  = interval_bisection<BlackScholesCall, &BlackScholesCall::option_price>(C_M, low_vol, high_vol, epsilon, bsc);
    
    std::cout<<"Implied vol with bisection method = "<<sigma<<std::endl;
    
    
    return 0;
}

int testingNewtonRaphson(){
    
    double S = 100;
    double K = 100;
    double r = 0.05;
    double T = 1.0;
    double C_M = 10.5;
    
    BlackScholesCall bsc(S,K,r,T);
    
    double init =0.3;
    double epsilon = 0.001;
    
    double sigma = newton_raphson<BlackScholesCall, &BlackScholesCall::option_price, &BlackScholesCall::option_vega>(C_M, init, epsilon, bsc);
    
    std::cout<<"Implied vol with Newton Raphson = "<<sigma<<std::endl;
    
    return 0;
}

int testingRandomModule(){
    
    unsigned long init_seed = 1;
    unsigned long num_draws = 20;
    std::vector<double> random_draws(num_draws, 0);
    LinearCongruentialGenerator lcg(num_draws, init_seed);
    lcg.get_uniform_draws(random_draws);
    
    for (unsigned long i=0; i<num_draws; i++){
        std::cout<<random_draws.at(i)<<std::endl;
    }
    
    return 0;
}

int testingNormalDistribution(){
    
    StandardNormalDistribution snd;
    
    std::vector<double> uniform_draws(20,0);
    std::vector<double> normal_draws(20,0);
    
    for (int i=0; i<uniform_draws.size(); i++){
        
        uniform_draws.at(i) = rand()/static_cast<double>(RAND_MAX);
    }
    
    snd.random_draws(uniform_draws, normal_draws);
    
    for (int i = 0; i<normal_draws.size(); i++){
        std::cout<<normal_draws.at(i)<<std::endl;
    }
    
    return 0;
}

int testingBSJD(){
    
    double S=100;
    double K=100;
    
    double r = 0.05;
    double v = 0.2;
    double T = 1.;
    
    int N=50;
    
    double m = 1.083287;
    double lambda = 1.;
    double nu = 0.4;
    
    double call_jd = bs_jd_call_price(S,K,r,v,T,N,m,lambda,nu);
    
    std::cout<<"Call price under JD "<<call_jd<<std::endl;
    
    
    return 0;
}

int testingCorrelationSND(){
    
    int vals = 30;
    
    StandardNormalDistribution snd;
    std::vector<double> snd_uniform_draws(vals, 0);
    std::vector<double> snd_normal_draws(vals, 0);
    
    for (int i=0; i<snd_uniform_draws.size(); i++){
        snd_uniform_draws.at(i) = rand()/static_cast<double>(RAND_MAX);
    }
    
    snd.random_draws(snd_uniform_draws, snd_normal_draws);
    
    double rho = 0.5;
    
    CorrelatedSND csnd(rho, &snd_normal_draws);
    std::vector<double> csnd_uniform_draws(vals, 0);
    std::vector<double> csnd_normal_draws(vals, 0);
    
    for (int i=0; i<snd_uniform_draws.size(); i++){
        csnd_uniform_draws.at(i) = rand()/static_cast<double>(RAND_MAX);
    }
    
    csnd.random_draws(csnd_uniform_draws, csnd_normal_draws);
    
    for (int i=0; i<csnd_normal_draws.size(); i++){
        std::cout<<snd_normal_draws.at(i)<<", "<<csnd_normal_draws.at(i)<<std::endl;
    }
    return 0;
}

int testistingHestonEuler(){
    
    unsigned num_sims = 100000;
    unsigned num_intervals = 1000;
    
    double S_0 = 100;
    double K = 100;
    double r = 0.0319;
    double v_0 = 0.010201;
    double T = 1.;
    
    double rho = -0.7;
    double kappa = 6.21;
    double theta = 0.019;
    double xi = 0.61;
    
    PayOff* pPayOffCall = new PayOffCall(K);
    Option* pOption = new Option(K,r,T,pPayOffCall);
    
    HestonEuler hest_euler(pOption, kappa, theta, xi, rho);
    
    std::vector<double> spot_draws(num_intervals,0.);
    std::vector<double> vol_draws(num_intervals,0.);
    std::vector<double> spot_prices(num_intervals,S_0);
    std::vector<double> vol_prices(num_intervals,v_0);
    
    double payoff_sum = 0.;
    
    for (unsigned i = 0; i<num_sims; i++){
        std::cout<<"Calculating path "<<i+1<<" of "<<num_sims<<std::endl;
        generate_normal_correlation_paths(rho, spot_draws, vol_draws);
        hest_euler.calc_vol_path(vol_draws, vol_prices);
        hest_euler.calc_spot_path(spot_draws, vol_prices, spot_prices);
        payoff_sum += pOption->pay_off->operator()(spot_prices[num_intervals-1]);
    }
    
    double option_price = (payoff_sum/static_cast<double>(num_sims))*exp(-r*T);
    std::cout<<"Option price: "<<option_price<<std::endl;
    
    return 0;
}

int main() {
//    testingVanillaOption();
//    testingPayOffs();
//    testingMatrix();
//    testingFunctors();
//    testingQSMatrix();
//    testingEigen();
//    testingEigenLU();
//    testingThomasAlgorithm();
//    testingEigenCholesky();
//    testingEigenQR();
//    testingEurOptBS();
//    testingEurOptMC();
//    testingEurOptGreeksBS();
//    testing_call_GreeksMC();
//    testingAsian();
//    testingBisection();
//    testingNewtonRaphson();
//    testingRandomModule();
//    testingNormalDistribution();
    
//    testingBSJD();
//    testingCorrelationSND();
//    testistingHestonEuler();
    
    return 0;
}
