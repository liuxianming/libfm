libFM
=====

Forked from [libFM](https://github.com/srendle/libfm).

Adding functionality to support I/O and restoring from Breakpoints.

Collaborator: YuChieh Ho and Xianming Liu

Usage:
```cpp
fm_model.load(std::string filepath);
fm_model.save(std::string filepath);
fm_model::fm_model(std::string filepath)
```
The impelementation uses protobuf to serizalize fm_model class; for matrix and vectors, an implementation changes it to binary string and changes back.

=====

Library for factorization machines

web: http://www.libfm.org/

forum: https://groups.google.com/forum/#!forum/libfm

Factorization machines (FM) are a generic approach that allows to mimic most factorization models by feature engineering. This way, factorization machines combine the generality of feature engineering with the superiority of factorization models in estimating interactions between categorical variables of large domain. libFM is a software implementation for factorization machines that features stochastic gradient descent (SGD) and alternating least squares (ALS) optimization as well as Bayesian inference using Markov Chain Monte Carlo (MCMC).

Compile
=======
libFM has been tested with the GNU compiler collection and GNU make. libFM and the tools can be compiled with
> make all

Usage
=====
Please see the [libFM 1.4.2 manual](http://www.libfm.org/libfm-1.42.manual.pdf) for details about how to use libFM. If you have questions, please visit the [forum](https://groups.google.com/forum/#!forum/libfm).
