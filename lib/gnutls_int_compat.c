#include "gnutls.h"

/* This file contains functions needed only for binary compatibility
 * with previous versions.
 */

/* used in 0.3.x */
int gnutls_check_pending( GNUTLS_STATE state) {
	return gnutls_record_check_pending( state);
}

/* used in 0.3.x */
void gnutls_x509pki_set_dh_bits(GNUTLS_STATE state, int bits) {
	gnutls_dh_set_dhe_bits( state, bits);
}

/* used in 0.3.x */
int gnutls_anon_server_get_dh_bits(GNUTLS_STATE state)
{
	return gnutls_dh_get_dha_bits( state);
}

/* used in 0.3.x */
int gnutls_anon_client_get_dh_bits(GNUTLS_STATE state)
{
	return gnutls_dh_get_dha_bits( state);
}
