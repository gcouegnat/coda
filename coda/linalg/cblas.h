// Headers from CBLAS, downloaded at http://www.netlib.org/blas/.

#ifndef CBLAS_INT
#define CBLAS_INT int
#endif

extern "C" {

  enum CBLAS_ORDER      {CblasRowMajor = 101 , CblasColMajor = 102                        } ;
  enum CBLAS_TRANSPOSE  {CblasNoTrans  = 111 , CblasTrans    = 112 , CblasConjTrans = 113 } ;
  enum CBLAS_UPLO       {CblasUpper    = 121 , CblasLower    = 122                        } ;
  enum CBLAS_DIAG       {CblasNonUnit  = 131 , CblasUnit     = 132                        } ;
  enum CBLAS_SIDE       {CblasLeft     = 141 , CblasRight    = 142                        } ;

  /*
   * ===========================================================================
   * Prototypes for level 1 BLAS functions (complex are recast as routines)
   * ===========================================================================
   */
  float  cblas_sdsdot(CBLAS_INT N, float alpha, const float *X,
                      CBLAS_INT incX, const float *Y, CBLAS_INT incY);
  double cblas_dsdot(CBLAS_INT N, const float *X, CBLAS_INT incX, const float *Y,
                     CBLAS_INT incY);
  float  cblas_sdot(CBLAS_INT N, const float  *X, CBLAS_INT incX,
                    const float  *Y, CBLAS_INT incY);
  double cblas_ddot(CBLAS_INT N, const double *X, CBLAS_INT incX,
                    const double *Y, CBLAS_INT incY);

  /*
   * Functions having prefixes Z and C only
   */
  void   cblas_cdotu_sub(CBLAS_INT N, const void *X, CBLAS_INT incX,
                         const void *Y, CBLAS_INT incY, void *dotu);
  void   cblas_cdotc_sub(CBLAS_INT N, const void *X, CBLAS_INT incX,
                         const void *Y, CBLAS_INT incY, void *dotc);

  void   cblas_zdotu_sub(CBLAS_INT N, const void *X, CBLAS_INT incX,
                         const void *Y, CBLAS_INT incY, void *dotu);
  void   cblas_zdotc_sub(CBLAS_INT N, const void *X, CBLAS_INT incX,
                         const void *Y, CBLAS_INT incY, void *dotc);


  /*
   * Functions having prefixes S D SC DZ
   */
  float  cblas_snrm2(CBLAS_INT N, const float *X, CBLAS_INT incX);
  float  cblas_sasum(CBLAS_INT N, const float *X, CBLAS_INT incX);

  double cblas_dnrm2(CBLAS_INT N, const double *X, CBLAS_INT incX);
  double cblas_dasum(CBLAS_INT N, const double *X, CBLAS_INT incX);

  float  cblas_scnrm2(CBLAS_INT N, const void *X, CBLAS_INT incX);
  float  cblas_scasum(CBLAS_INT N, const void *X, CBLAS_INT incX);

  double cblas_dznrm2(CBLAS_INT N, const void *X, CBLAS_INT incX);
  double cblas_dzasum(CBLAS_INT N, const void *X, CBLAS_INT incX);


  /*
   * Functions having standard 4 prefixes (S D C Z)
   */
  CBLAS_INDEX cblas_isamax(CBLAS_INT N, const float  *X, CBLAS_INT incX);
  CBLAS_INDEX cblas_idamax(CBLAS_INT N, const double *X, CBLAS_INT incX);
  CBLAS_INDEX cblas_icamax(CBLAS_INT N, const void   *X, CBLAS_INT incX);
  CBLAS_INDEX cblas_izamax(CBLAS_INT N, const void   *X, CBLAS_INT incX);

  /*
   * ===========================================================================
   * Prototypes for level 1 BLAS routines
   * ===========================================================================
   */

  /*
   * Routines with standard 4 prefixes (s, d, c, z)
   */
  void cblas_sswap(CBLAS_INT N, float *X, CBLAS_INT incX,
                   float *Y, CBLAS_INT incY);
  void cblas_scopy(CBLAS_INT N, const float *X, CBLAS_INT incX,
                   float *Y, CBLAS_INT incY);
  void cblas_saxpy(CBLAS_INT N, float alpha, const float *X,
                   CBLAS_INT incX, float *Y, CBLAS_INT incY);

  void cblas_dswap(CBLAS_INT N, double *X, CBLAS_INT incX,
                   double *Y, CBLAS_INT incY);
  void cblas_dcopy(CBLAS_INT N, const double *X, CBLAS_INT incX,
                   double *Y, CBLAS_INT incY);
  void cblas_daxpy(CBLAS_INT N, double alpha, const double *X,
                   CBLAS_INT incX, double *Y, CBLAS_INT incY);

  void cblas_cswap(CBLAS_INT N, void *X, CBLAS_INT incX,
                   void *Y, CBLAS_INT incY);
  void cblas_ccopy(CBLAS_INT N, const void *X, CBLAS_INT incX,
                   void *Y, CBLAS_INT incY);
  void cblas_caxpy(CBLAS_INT N, const void *alpha, const void *X,
                   CBLAS_INT incX, void *Y, CBLAS_INT incY);

  void cblas_zswap(CBLAS_INT N, void *X, CBLAS_INT incX,
                   void *Y, CBLAS_INT incY);
  void cblas_zcopy(CBLAS_INT N, const void *X, CBLAS_INT incX,
                   void *Y, CBLAS_INT incY);
  void cblas_zaxpy(CBLAS_INT N, const void *alpha, const void *X,
                   CBLAS_INT incX, void *Y, CBLAS_INT incY);


  /*
   * Routines with S and D prefix only
   */
  void cblas_srotg(float *a, float *b, float *c, float *s);
  void cblas_srotmg(float *d1, float *d2, float *b1, const float b2, float *P);
  void cblas_srot(CBLAS_INT N, float *X, CBLAS_INT incX,
                  float *Y, CBLAS_INT incY, const float c, const float s);
  void cblas_srotm(CBLAS_INT N, float *X, CBLAS_INT incX,
                   float *Y, CBLAS_INT incY, const float *P);

  void cblas_drotg(double *a, double *b, double *c, double *s);
  void cblas_drotmg(double *d1, double *d2, double *b1, const double b2, double *P);
  void cblas_drot(CBLAS_INT N, double *X, CBLAS_INT incX,
                  double *Y, CBLAS_INT incY, const double c, const double  s);
  void cblas_drotm(CBLAS_INT N, double *X, CBLAS_INT incX,
                   double *Y, CBLAS_INT incY, const double *P);


  /*
   * Routines with S D C Z CS and ZD prefixes
   */
  void cblas_sscal(CBLAS_INT N, float alpha, float *X, CBLAS_INT incX);
  void cblas_dscal(CBLAS_INT N, double alpha, double *X, CBLAS_INT incX);
  void cblas_cscal(CBLAS_INT N, const void *alpha, void *X, CBLAS_INT incX);
  void cblas_zscal(CBLAS_INT N, const void *alpha, void *X, CBLAS_INT incX);
  void cblas_csscal(CBLAS_INT N, float alpha, void *X, CBLAS_INT incX);
  void cblas_zdscal(CBLAS_INT N, double alpha, void *X, CBLAS_INT incX);

  /*
   * ===========================================================================
   * Prototypes for level 2 BLAS
   * ===========================================================================
   */

  /*
   * Routines with standard 4 prefixes (S, D, C, Z)
   */
  void cblas_sgemv(enum CBLAS_ORDER order,
                   enum CBLAS_TRANSPOSE TransA, CBLAS_INT M, CBLAS_INT N,
                   float alpha, const float *A, CBLAS_INT lda,
                   const float *X, CBLAS_INT incX, float beta,
                   float *Y, CBLAS_INT incY);
  void cblas_sgbmv(enum CBLAS_ORDER order,
                   enum CBLAS_TRANSPOSE TransA, CBLAS_INT M, CBLAS_INT N,
                   CBLAS_INT KL, CBLAS_INT KU, float alpha,
                   const float *A, CBLAS_INT lda, const float *X,
                   CBLAS_INT incX, float beta, float *Y, CBLAS_INT incY);
  void cblas_strmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, const float *A, CBLAS_INT lda,
                   float *X, CBLAS_INT incX);
  void cblas_stbmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, CBLAS_INT K, const float *A, CBLAS_INT lda,
                   float *X, CBLAS_INT incX);
  void cblas_stpmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, const float *Ap, float *X, CBLAS_INT incX);
  void cblas_strsv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, const float *A, CBLAS_INT lda, float *X,
                   CBLAS_INT incX);
  void cblas_stbsv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, CBLAS_INT K, const float *A, CBLAS_INT lda,
                   float *X, CBLAS_INT incX);
  void cblas_stpsv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, const float *Ap, float *X, CBLAS_INT incX);

  void cblas_dgemv(enum CBLAS_ORDER order,
                   enum CBLAS_TRANSPOSE TransA, CBLAS_INT M, CBLAS_INT N,
                   double alpha, const double *A, CBLAS_INT lda,
                   const double *X, CBLAS_INT incX, double beta,
                   double *Y, CBLAS_INT incY);
  void cblas_dgbmv(enum CBLAS_ORDER order,
                   enum CBLAS_TRANSPOSE TransA, CBLAS_INT M, CBLAS_INT N,
                   CBLAS_INT KL, CBLAS_INT KU, double alpha,
                   const double *A, CBLAS_INT lda, const double *X,
                   CBLAS_INT incX, double beta, double *Y, CBLAS_INT incY);
  void cblas_dtrmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, const double *A, CBLAS_INT lda,
                   double *X, CBLAS_INT incX);
  void cblas_dtbmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, CBLAS_INT K, const double *A, CBLAS_INT lda,
                   double *X, CBLAS_INT incX);
  void cblas_dtpmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, const double *Ap, double *X, CBLAS_INT incX);
  void cblas_dtrsv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, const double *A, CBLAS_INT lda, double *X,
                   CBLAS_INT incX);
  void cblas_dtbsv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, CBLAS_INT K, const double *A, CBLAS_INT lda,
                   double *X, CBLAS_INT incX);
  void cblas_dtpsv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, const double *Ap, double *X, CBLAS_INT incX);

  void cblas_cgemv(enum CBLAS_ORDER order,
                   enum CBLAS_TRANSPOSE TransA, CBLAS_INT M, CBLAS_INT N,
                   const void *alpha, const void *A, CBLAS_INT lda,
                   const void *X, CBLAS_INT incX, const void *beta,
                   void *Y, CBLAS_INT incY);
  void cblas_cgbmv(enum CBLAS_ORDER order,
                   enum CBLAS_TRANSPOSE TransA, CBLAS_INT M, CBLAS_INT N,
                   CBLAS_INT KL, CBLAS_INT KU, const void *alpha,
                   const void *A, CBLAS_INT lda, const void *X,
                   CBLAS_INT incX, const void *beta, void *Y, CBLAS_INT incY);
  void cblas_ctrmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, const void *A, CBLAS_INT lda,
                   void *X, CBLAS_INT incX);
  void cblas_ctbmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, CBLAS_INT K, const void *A, CBLAS_INT lda,
                   void *X, CBLAS_INT incX);
  void cblas_ctpmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, const void *Ap, void *X, CBLAS_INT incX);
  void cblas_ctrsv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, const void *A, CBLAS_INT lda, void *X,
                   CBLAS_INT incX);
  void cblas_ctbsv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, CBLAS_INT K, const void *A, CBLAS_INT lda,
                   void *X, CBLAS_INT incX);
  void cblas_ctpsv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, const void *Ap, void *X, CBLAS_INT incX);

  void cblas_zgemv(enum CBLAS_ORDER order,
                   enum CBLAS_TRANSPOSE TransA, CBLAS_INT M, CBLAS_INT N,
                   const void *alpha, const void *A, CBLAS_INT lda,
                   const void *X, CBLAS_INT incX, const void *beta,
                   void *Y, CBLAS_INT incY);
  void cblas_zgbmv(enum CBLAS_ORDER order,
                   enum CBLAS_TRANSPOSE TransA, CBLAS_INT M, CBLAS_INT N,
                   CBLAS_INT KL, CBLAS_INT KU, const void *alpha,
                   const void *A, CBLAS_INT lda, const void *X,
                   CBLAS_INT incX, const void *beta, void *Y, CBLAS_INT incY);
  void cblas_ztrmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, const void *A, CBLAS_INT lda,
                   void *X, CBLAS_INT incX);
  void cblas_ztbmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, CBLAS_INT K, const void *A, CBLAS_INT lda,
                   void *X, CBLAS_INT incX);
  void cblas_ztpmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, const void *Ap, void *X, CBLAS_INT incX);
  void cblas_ztrsv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, const void *A, CBLAS_INT lda, void *X,
                   CBLAS_INT incX);
  void cblas_ztbsv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, CBLAS_INT K, const void *A, CBLAS_INT lda,
                   void *X, CBLAS_INT incX);
  void cblas_ztpsv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_DIAG Diag,
                   CBLAS_INT N, const void *Ap, void *X, CBLAS_INT incX);


  /*
   * Routines with S and D prefixes only
   */
  void cblas_ssymv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   CBLAS_INT N, float alpha, const float *A,
                   CBLAS_INT lda, const float *X, CBLAS_INT incX,
                   float beta, float *Y, CBLAS_INT incY);
  void cblas_ssbmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   CBLAS_INT N, CBLAS_INT K, float alpha, const float *A,
                   CBLAS_INT lda, const float *X, CBLAS_INT incX,
                   float beta, float *Y, CBLAS_INT incY);
  void cblas_sspmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   CBLAS_INT N, float alpha, const float *Ap,
                   const float *X, CBLAS_INT incX,
                   float beta, float *Y, CBLAS_INT incY);
  void cblas_sger(enum CBLAS_ORDER order, CBLAS_INT M, CBLAS_INT N,
                  float alpha, const float *X, CBLAS_INT incX,
                  const float *Y, CBLAS_INT incY, float *A, CBLAS_INT lda);
  void cblas_ssyr(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                  CBLAS_INT N, float alpha, const float *X,
                  CBLAS_INT incX, float *A, CBLAS_INT lda);
  void cblas_sspr(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                  CBLAS_INT N, float alpha, const float *X,
                  CBLAS_INT incX, float *Ap);
  void cblas_ssyr2(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   CBLAS_INT N, float alpha, const float *X,
                   CBLAS_INT incX, const float *Y, CBLAS_INT incY, float *A,
                   CBLAS_INT lda);
  void cblas_sspr2(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   CBLAS_INT N, float alpha, const float *X,
                   CBLAS_INT incX, const float *Y, CBLAS_INT incY, float *A);

  void cblas_dsymv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   CBLAS_INT N, double alpha, const double *A,
                   CBLAS_INT lda, const double *X, CBLAS_INT incX,
                   double beta, double *Y, CBLAS_INT incY);
  void cblas_dsbmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   CBLAS_INT N, CBLAS_INT K, double alpha, const double *A,
                   CBLAS_INT lda, const double *X, CBLAS_INT incX,
                   double beta, double *Y, CBLAS_INT incY);
  void cblas_dspmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   CBLAS_INT N, double alpha, const double *Ap,
                   const double *X, CBLAS_INT incX,
                   double beta, double *Y, CBLAS_INT incY);
  void cblas_dger(enum CBLAS_ORDER order, CBLAS_INT M, CBLAS_INT N,
                  double alpha, const double *X, CBLAS_INT incX,
                  const double *Y, CBLAS_INT incY, double *A, CBLAS_INT lda);
  void cblas_dsyr(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                  CBLAS_INT N, double alpha, const double *X,
                  CBLAS_INT incX, double *A, CBLAS_INT lda);
  void cblas_dspr(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                  CBLAS_INT N, double alpha, const double *X,
                  CBLAS_INT incX, double *Ap);
  void cblas_dsyr2(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   CBLAS_INT N, double alpha, const double *X,
                   CBLAS_INT incX, const double *Y, CBLAS_INT incY, double *A,
                   CBLAS_INT lda);
  void cblas_dspr2(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   CBLAS_INT N, double alpha, const double *X,
                   CBLAS_INT incX, const double *Y, CBLAS_INT incY, double *A);


  /*
   * Routines with C and Z prefixes only
   */
  void cblas_chemv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   CBLAS_INT N, const void *alpha, const void *A,
                   CBLAS_INT lda, const void *X, CBLAS_INT incX,
                   const void *beta, void *Y, CBLAS_INT incY);
  void cblas_chbmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   CBLAS_INT N, CBLAS_INT K, const void *alpha, const void *A,
                   CBLAS_INT lda, const void *X, CBLAS_INT incX,
                   const void *beta, void *Y, CBLAS_INT incY);
  void cblas_chpmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   CBLAS_INT N, const void *alpha, const void *Ap,
                   const void *X, CBLAS_INT incX,
                   const void *beta, void *Y, CBLAS_INT incY);
  void cblas_cgeru(enum CBLAS_ORDER order, CBLAS_INT M, CBLAS_INT N,
                   const void *alpha, const void *X, CBLAS_INT incX,
                   const void *Y, CBLAS_INT incY, void *A, CBLAS_INT lda);
  void cblas_cgerc(enum CBLAS_ORDER order, CBLAS_INT M, CBLAS_INT N,
                   const void *alpha, const void *X, CBLAS_INT incX,
                   const void *Y, CBLAS_INT incY, void *A, CBLAS_INT lda);
  void cblas_cher(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                  CBLAS_INT N, float alpha, const void *X, CBLAS_INT incX,
                  void *A, CBLAS_INT lda);
  void cblas_chpr(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                  CBLAS_INT N, float alpha, const void *X,
                  CBLAS_INT incX, void *A);
  void cblas_cher2(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo, CBLAS_INT N,
                   const void *alpha, const void *X, CBLAS_INT incX,
                   const void *Y, CBLAS_INT incY, void *A, CBLAS_INT lda);
  void cblas_chpr2(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo, CBLAS_INT N,
                   const void *alpha, const void *X, CBLAS_INT incX,
                   const void *Y, CBLAS_INT incY, void *Ap);

  void cblas_zhemv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   CBLAS_INT N, const void *alpha, const void *A,
                   CBLAS_INT lda, const void *X, CBLAS_INT incX,
                   const void *beta, void *Y, CBLAS_INT incY);
  void cblas_zhbmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   CBLAS_INT N, CBLAS_INT K, const void *alpha, const void *A,
                   CBLAS_INT lda, const void *X, CBLAS_INT incX,
                   const void *beta, void *Y, CBLAS_INT incY);
  void cblas_zhpmv(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                   CBLAS_INT N, const void *alpha, const void *Ap,
                   const void *X, CBLAS_INT incX,
                   const void *beta, void *Y, CBLAS_INT incY);
  void cblas_zgeru(enum CBLAS_ORDER order, CBLAS_INT M, CBLAS_INT N,
                   const void *alpha, const void *X, CBLAS_INT incX,
                   const void *Y, CBLAS_INT incY, void *A, CBLAS_INT lda);
  void cblas_zgerc(enum CBLAS_ORDER order, CBLAS_INT M, CBLAS_INT N,
                   const void *alpha, const void *X, CBLAS_INT incX,
                   const void *Y, CBLAS_INT incY, void *A, CBLAS_INT lda);
  void cblas_zher(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                  CBLAS_INT N, double alpha, const void *X, CBLAS_INT incX,
                  void *A, CBLAS_INT lda);
  void cblas_zhpr(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo,
                  CBLAS_INT N, double alpha, const void *X,
                  CBLAS_INT incX, void *A);
  void cblas_zher2(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo, CBLAS_INT N,
                   const void *alpha, const void *X, CBLAS_INT incX,
                   const void *Y, CBLAS_INT incY, void *A, CBLAS_INT lda);
  void cblas_zhpr2(enum CBLAS_ORDER order, enum CBLAS_UPLO Uplo, CBLAS_INT N,
                   const void *alpha, const void *X, CBLAS_INT incX,
                   const void *Y, CBLAS_INT incY, void *Ap);

  /*
   * ===========================================================================
   * Prototypes for level 3 BLAS
   * ===========================================================================
   */

  /*
   * Routines with standard 4 prefixes (S, D, C, Z)
   */
  void cblas_sgemm(enum CBLAS_ORDER Order, enum CBLAS_TRANSPOSE TransA,
                   enum CBLAS_TRANSPOSE TransB, CBLAS_INT M, CBLAS_INT N,
                   CBLAS_INT K, float alpha, const float *A,
                   CBLAS_INT lda, const float *B, CBLAS_INT ldb,
                   float beta, float *C, CBLAS_INT ldc);
  void cblas_ssymm(enum CBLAS_ORDER Order, enum CBLAS_SIDE Side,
                   enum CBLAS_UPLO Uplo, CBLAS_INT M, CBLAS_INT N,
                   float alpha, const float *A, CBLAS_INT lda,
                   const float *B, CBLAS_INT ldb, float beta,
                   float *C, CBLAS_INT ldc);
  void cblas_ssyrk(enum CBLAS_ORDER Order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE Trans, CBLAS_INT N, CBLAS_INT K,
                   float alpha, const float *A, CBLAS_INT lda,
                   float beta, float *C, CBLAS_INT ldc);
  void cblas_ssyr2k(enum CBLAS_ORDER Order, enum CBLAS_UPLO Uplo,
                    enum CBLAS_TRANSPOSE Trans, CBLAS_INT N, CBLAS_INT K,
                    float alpha, const float *A, CBLAS_INT lda,
                    const float *B, CBLAS_INT ldb, float beta,
                    float *C, CBLAS_INT ldc);
  void cblas_strmm(enum CBLAS_ORDER Order, enum CBLAS_SIDE Side,
                   enum CBLAS_UPLO Uplo, enum CBLAS_TRANSPOSE TransA,
                   enum CBLAS_DIAG Diag, CBLAS_INT M, CBLAS_INT N,
                   float alpha, const float *A, CBLAS_INT lda,
                   float *B, CBLAS_INT ldb);
  void cblas_strsm(enum CBLAS_ORDER Order, enum CBLAS_SIDE Side,
                   enum CBLAS_UPLO Uplo, enum CBLAS_TRANSPOSE TransA,
                   enum CBLAS_DIAG Diag, CBLAS_INT M, CBLAS_INT N,
                   float alpha, const float *A, CBLAS_INT lda,
                   float *B, CBLAS_INT ldb);

  void cblas_dgemm(enum CBLAS_ORDER Order,
                   enum CBLAS_TRANSPOSE TransA, enum CBLAS_TRANSPOSE TransB,
                   CBLAS_INT M, CBLAS_INT N, CBLAS_INT K,
                   double alpha,
                   const double *A, CBLAS_INT lda,
                   const double *B, CBLAS_INT ldb,
                   double beta,
                   double *C, CBLAS_INT ldc);
  void cblas_dsymm(enum CBLAS_ORDER Order, enum CBLAS_SIDE Side,
                   enum CBLAS_UPLO Uplo, CBLAS_INT M, CBLAS_INT N,
                   double alpha, const double *A, CBLAS_INT lda,
                   const double *B, CBLAS_INT ldb, double beta,
                   double *C, CBLAS_INT ldc);
  void cblas_dsyrk(enum CBLAS_ORDER Order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE Trans, CBLAS_INT N, CBLAS_INT K,
                   double alpha, const double *A, CBLAS_INT lda,
                   double beta, double *C, CBLAS_INT ldc);
  void cblas_dsyr2k(enum CBLAS_ORDER Order, enum CBLAS_UPLO Uplo,
                    enum CBLAS_TRANSPOSE Trans, CBLAS_INT N, CBLAS_INT K,
                    double alpha, const double *A, CBLAS_INT lda,
                    const double *B, CBLAS_INT ldb, double beta,
                    double *C, CBLAS_INT ldc);
  void cblas_dtrmm(enum CBLAS_ORDER Order, enum CBLAS_SIDE Side,
                   enum CBLAS_UPLO Uplo, enum CBLAS_TRANSPOSE TransA,
                   enum CBLAS_DIAG Diag, CBLAS_INT M, CBLAS_INT N,
                   double alpha, const double *A, CBLAS_INT lda,
                   double *B, CBLAS_INT ldb);
  void cblas_dtrsm(enum CBLAS_ORDER Order, enum CBLAS_SIDE Side,
                   enum CBLAS_UPLO Uplo, enum CBLAS_TRANSPOSE TransA,
                   enum CBLAS_DIAG Diag, CBLAS_INT M, CBLAS_INT N,
                   double alpha, const double *A, CBLAS_INT lda,
                   double *B, CBLAS_INT ldb);

  void cblas_cgemm(enum CBLAS_ORDER Order, enum CBLAS_TRANSPOSE TransA,
                   enum CBLAS_TRANSPOSE TransB, CBLAS_INT M, CBLAS_INT N,
                   CBLAS_INT K, const void *alpha, const void *A,
                   CBLAS_INT lda, const void *B, CBLAS_INT ldb,
                   const void *beta, void *C, CBLAS_INT ldc);
  void cblas_csymm(enum CBLAS_ORDER Order, enum CBLAS_SIDE Side,
                   enum CBLAS_UPLO Uplo, CBLAS_INT M, CBLAS_INT N,
                   const void *alpha, const void *A, CBLAS_INT lda,
                   const void *B, CBLAS_INT ldb, const void *beta,
                   void *C, CBLAS_INT ldc);
  void cblas_csyrk(enum CBLAS_ORDER Order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE Trans, CBLAS_INT N, CBLAS_INT K,
                   const void *alpha, const void *A, CBLAS_INT lda,
                   const void *beta, void *C, CBLAS_INT ldc);
  void cblas_csyr2k(enum CBLAS_ORDER Order, enum CBLAS_UPLO Uplo,
                    enum CBLAS_TRANSPOSE Trans, CBLAS_INT N, CBLAS_INT K,
                    const void *alpha, const void *A, CBLAS_INT lda,
                    const void *B, CBLAS_INT ldb, const void *beta,
                    void *C, CBLAS_INT ldc);
  void cblas_ctrmm(enum CBLAS_ORDER Order, enum CBLAS_SIDE Side,
                   enum CBLAS_UPLO Uplo, enum CBLAS_TRANSPOSE TransA,
                   enum CBLAS_DIAG Diag, CBLAS_INT M, CBLAS_INT N,
                   const void *alpha, const void *A, CBLAS_INT lda,
                   void *B, CBLAS_INT ldb);
  void cblas_ctrsm(enum CBLAS_ORDER Order, enum CBLAS_SIDE Side,
                   enum CBLAS_UPLO Uplo, enum CBLAS_TRANSPOSE TransA,
                   enum CBLAS_DIAG Diag, CBLAS_INT M, CBLAS_INT N,
                   const void *alpha, const void *A, CBLAS_INT lda,
                   void *B, CBLAS_INT ldb);

  void cblas_zgemm(enum CBLAS_ORDER Order, enum CBLAS_TRANSPOSE TransA,
                   enum CBLAS_TRANSPOSE TransB, CBLAS_INT M, CBLAS_INT N,
                   CBLAS_INT K, const void *alpha, const void *A,
                   CBLAS_INT lda, const void *B, CBLAS_INT ldb,
                   const void *beta, void *C, CBLAS_INT ldc);
  void cblas_zsymm(enum CBLAS_ORDER Order, enum CBLAS_SIDE Side,
                   enum CBLAS_UPLO Uplo, CBLAS_INT M, CBLAS_INT N,
                   const void *alpha, const void *A, CBLAS_INT lda,
                   const void *B, CBLAS_INT ldb, const void *beta,
                   void *C, CBLAS_INT ldc);
  void cblas_zsyrk(enum CBLAS_ORDER Order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE Trans, CBLAS_INT N, CBLAS_INT K,
                   const void *alpha, const void *A, CBLAS_INT lda,
                   const void *beta, void *C, CBLAS_INT ldc);
  void cblas_zsyr2k(enum CBLAS_ORDER Order, enum CBLAS_UPLO Uplo,
                    enum CBLAS_TRANSPOSE Trans, CBLAS_INT N, CBLAS_INT K,
                    const void *alpha, const void *A, CBLAS_INT lda,
                    const void *B, CBLAS_INT ldb, const void *beta,
                    void *C, CBLAS_INT ldc);
  void cblas_ztrmm(enum CBLAS_ORDER Order, enum CBLAS_SIDE Side,
                   enum CBLAS_UPLO Uplo, enum CBLAS_TRANSPOSE TransA,
                   enum CBLAS_DIAG Diag, CBLAS_INT M, CBLAS_INT N,
                   const void *alpha, const void *A, CBLAS_INT lda,
                   void *B, CBLAS_INT ldb);
  void cblas_ztrsm(enum CBLAS_ORDER Order, enum CBLAS_SIDE Side,
                   enum CBLAS_UPLO Uplo, enum CBLAS_TRANSPOSE TransA,
                   enum CBLAS_DIAG Diag, CBLAS_INT M, CBLAS_INT N,
                   const void *alpha, const void *A, CBLAS_INT lda,
                   void *B, CBLAS_INT ldb);


  /*
   * Routines with prefixes C and Z only
   */
  void cblas_chemm(enum CBLAS_ORDER Order, enum CBLAS_SIDE Side,
                   enum CBLAS_UPLO Uplo, CBLAS_INT M, CBLAS_INT N,
                   const void *alpha, const void *A, CBLAS_INT lda,
                   const void *B, CBLAS_INT ldb, const void *beta,
                   void *C, CBLAS_INT ldc);
  void cblas_cherk(enum CBLAS_ORDER Order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE Trans, CBLAS_INT N, CBLAS_INT K,
                   float alpha, const void *A, CBLAS_INT lda,
                   float beta, void *C, CBLAS_INT ldc);
  void cblas_cher2k(enum CBLAS_ORDER Order, enum CBLAS_UPLO Uplo,
                    enum CBLAS_TRANSPOSE Trans, CBLAS_INT N, CBLAS_INT K,
                    const void *alpha, const void *A, CBLAS_INT lda,
                    const void *B, CBLAS_INT ldb, float beta,
                    void *C, CBLAS_INT ldc);

  void cblas_zhemm(enum CBLAS_ORDER Order, enum CBLAS_SIDE Side,
                   enum CBLAS_UPLO Uplo, CBLAS_INT M, CBLAS_INT N,
                   const void *alpha, const void *A, CBLAS_INT lda,
                   const void *B, CBLAS_INT ldb, const void *beta,
                   void *C, CBLAS_INT ldc);
  void cblas_zherk(enum CBLAS_ORDER Order, enum CBLAS_UPLO Uplo,
                   enum CBLAS_TRANSPOSE Trans, CBLAS_INT N, CBLAS_INT K,
                   double alpha, const void *A, CBLAS_INT lda,
                   double beta, void *C, CBLAS_INT ldc);
  void cblas_zher2k(enum CBLAS_ORDER Order, enum CBLAS_UPLO Uplo,
                    enum CBLAS_TRANSPOSE Trans, CBLAS_INT N, CBLAS_INT K,
                    const void *alpha, const void *A, CBLAS_INT lda,
                    const void *B, CBLAS_INT ldb, double beta,
                    void *C, CBLAS_INT ldc);

  void cblas_xerbla(CBLAS_INT p, const char *rout, const char *form, ...);

}  // extern "C"

