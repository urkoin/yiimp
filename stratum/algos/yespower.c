#include "yespower.h"

/*
int yespower_hash(const char *input, char *output)
{
	yespower_params_t params = {YESPOWER_1_0, 2048, 32, NULL, 0};
	return yespower_tls(input, 80, &params, (yespower_binary_t *) output);
}
*/
void yespower_hash(const char *input, char *output, uint32_t len)
{
	yespower_params_t params = {YESPOWER_1_0, 2048, 32, NULL, 0};
	yespower_tls(input, 80, &params, (yespower_binary_t *) output);
}
