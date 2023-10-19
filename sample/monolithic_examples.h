
#pragma once

#if defined(BUILD_MONOLITHIC)

#define pcg_main_func(a)					a

#ifdef __cplusplus
extern "C" {
#endif

int pcgrnd_codebook_sample_main(int argc, const char** argv);
int pcgrnd_cppref_sample_main(int argc, const char** argv);
int pcgrnd_make_partytrick_sample_main(int argc, const char** argv);
int pcgrnd_demo_main(int argc, const char** argv);
int pcgrnd_spew_sample_main(int argc, const char** argv);
int pcgrnd_use_partytrick_sample_main(int argc, const char** argv);
	
int pcg_check_pcg128_once_insecure_main(int argc, const char** argv);
int pcg_check_pcg128_oneseq_once_insecure_main(int argc, const char** argv);
int pcg_check_pcg16_once_insecure_main(int argc, const char** argv);
int pcg_check_pcg16_oneseq_once_insecure_main(int argc, const char** argv);
int pcg_check_pcg32_main(int argc, const char** argv);
int pcg_check_pcg32_c1024_main(int argc, const char** argv);
int pcg_check_pcg32_c1024_fast_main(int argc, const char** argv);
int pcg_check_pcg32_c64_main(int argc, const char** argv);
int pcg_check_pcg32_c64_fast_main(int argc, const char** argv);
int pcg_check_pcg32_c64_oneseq_main(int argc, const char** argv);
int pcg_check_pcg32_fast_main(int argc, const char** argv);
int pcg_check_pcg32_k1024_main(int argc, const char** argv);
int pcg_check_pcg32_k1024_fast_main(int argc, const char** argv);
int pcg_check_pcg32_k16384_main(int argc, const char** argv);
int pcg_check_pcg32_k16384_fast_main(int argc, const char** argv);
int pcg_check_pcg32_k2_main(int argc, const char** argv);
int pcg_check_pcg32_k2_fast_main(int argc, const char** argv);
int pcg_check_pcg32_k64_main(int argc, const char** argv);
int pcg_check_pcg32_k64_fast_main(int argc, const char** argv);
int pcg_check_pcg32_k64_oneseq_main(int argc, const char** argv);
int pcg_check_pcg32_once_insecure_main(int argc, const char** argv);
int pcg_check_pcg32_oneseq_main(int argc, const char** argv);
int pcg_check_pcg32_oneseq_once_insecure_main(int argc, const char** argv);
int pcg_check_pcg32_unique_main(int argc, const char** argv);
int pcg_check_pcg64_main(int argc, const char** argv);
int pcg_check_pcg64_c1024_main(int argc, const char** argv);
int pcg_check_pcg64_c1024_fast_main(int argc, const char** argv);
int pcg_check_pcg64_c32_main(int argc, const char** argv);
int pcg_check_pcg64_c32_fast_main(int argc, const char** argv);
int pcg_check_pcg64_c32_oneseq_main(int argc, const char** argv);
int pcg_check_pcg64_fast_main(int argc, const char** argv);
int pcg_check_pcg64_k1024_main(int argc, const char** argv);
int pcg_check_pcg64_k1024_fast_main(int argc, const char** argv);
int pcg_check_pcg64_k32_main(int argc, const char** argv);
int pcg_check_pcg64_k32_fast_main(int argc, const char** argv);
int pcg_check_pcg64_k32_oneseq_main(int argc, const char** argv);
int pcg_check_pcg64_once_insecure_main(int argc, const char** argv);
int pcg_check_pcg64_oneseq_main(int argc, const char** argv);
int pcg_check_pcg64_oneseq_once_insecure_main(int argc, const char** argv);
int pcg_check_pcg64_unique_main(int argc, const char** argv);
int pcg_check_pcg8_once_insecure_main(int argc, const char** argv);
int pcg_check_pcg8_oneseq_once_insecure_main(int argc, const char** argv);
int pcg_test_no_advance_main(int argc, const char** argv);
int pcg_test_main(int argc, const char** argv);

#ifdef __cplusplus
}
#endif

#else

#define pcg_main_func(a)		main   

#endif
