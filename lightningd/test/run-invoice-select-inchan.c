#include "../channel.c"
#include "../invoice.c"
#include "../peer_control.c"
#include <ccan/alignof/alignof.h>

bool deprecated_apis = false;

/* AUTOGENERATED MOCKS START */
/* Generated stub for bitcoind_gettxout */
void bitcoind_gettxout(struct bitcoind *bitcoind UNNEEDED,
		       const struct bitcoin_txid *txid UNNEEDED, const u32 outnum UNNEEDED,
		       void (*cb)(struct bitcoind *bitcoind UNNEEDED,
				  const struct bitcoin_tx_output *txout UNNEEDED,
				  void *arg) UNNEEDED,
		       void *arg UNNEEDED)
{ fprintf(stderr, "bitcoind_gettxout called!\n"); abort(); }
/* Generated stub for bolt11_decode */
struct bolt11 *bolt11_decode(const tal_t *ctx UNNEEDED, const char *str UNNEEDED,
			     const char *description UNNEEDED, char **fail UNNEEDED)
{ fprintf(stderr, "bolt11_decode called!\n"); abort(); }
/* Generated stub for bolt11_encode_ */
char *bolt11_encode_(const tal_t *ctx UNNEEDED,
		     const struct bolt11 *b11 UNNEEDED, bool n_field UNNEEDED,
		     bool (*sign)(const u5 *u5bytes UNNEEDED,
				  const u8 *hrpu8 UNNEEDED,
				  secp256k1_ecdsa_recoverable_signature *rsig UNNEEDED,
				  void *arg) UNNEEDED,
		     void *arg UNNEEDED)
{ fprintf(stderr, "bolt11_encode_ called!\n"); abort(); }
/* Generated stub for broadcast_tx */
void broadcast_tx(struct chain_topology *topo UNNEEDED,
		  struct channel *channel UNNEEDED, const struct bitcoin_tx *tx UNNEEDED,
		  void (*failed)(struct channel *channel UNNEEDED,
				 int exitstatus UNNEEDED,
				 const char *err))
{ fprintf(stderr, "broadcast_tx called!\n"); abort(); }
/* Generated stub for channel_tell_depth */
bool channel_tell_depth(struct lightningd *ld UNNEEDED,
				 struct channel *channel UNNEEDED,
				 const struct bitcoin_txid *txid UNNEEDED,
				 u32 depth UNNEEDED)
{ fprintf(stderr, "channel_tell_depth called!\n"); abort(); }
/* Generated stub for command_fail */
struct command_result *command_fail(struct command *cmd UNNEEDED, int code UNNEEDED,
				    const char *fmt UNNEEDED, ...)

{ fprintf(stderr, "command_fail called!\n"); abort(); }
/* Generated stub for command_failed */
struct command_result *command_failed(struct command *cmd UNNEEDED,
				      struct json_stream *result)

{ fprintf(stderr, "command_failed called!\n"); abort(); }
/* Generated stub for command_its_complicated */
struct command_result *command_its_complicated(const char *why UNNEEDED)
{ fprintf(stderr, "command_its_complicated called!\n"); abort(); }
/* Generated stub for command_param_failed */
struct command_result *command_param_failed(void)

{ fprintf(stderr, "command_param_failed called!\n"); abort(); }
/* Generated stub for command_still_pending */
struct command_result *command_still_pending(struct command *cmd)

{ fprintf(stderr, "command_still_pending called!\n"); abort(); }
/* Generated stub for command_success */
struct command_result *command_success(struct command *cmd UNNEEDED,
				       struct json_stream *response)

{ fprintf(stderr, "command_success called!\n"); abort(); }
/* Generated stub for connect_succeeded */
void connect_succeeded(struct lightningd *ld UNNEEDED, const struct node_id *id UNNEEDED)
{ fprintf(stderr, "connect_succeeded called!\n"); abort(); }
/* Generated stub for delay_then_reconnect */
void delay_then_reconnect(struct channel *channel UNNEEDED, u32 seconds_delay UNNEEDED,
			  const struct wireaddr_internal *addrhint TAKES UNNEEDED)
{ fprintf(stderr, "delay_then_reconnect called!\n"); abort(); }
/* Generated stub for fail_htlc */
void fail_htlc(struct htlc_in *hin UNNEEDED, enum onion_type failcode UNNEEDED)
{ fprintf(stderr, "fail_htlc called!\n"); abort(); }
/* Generated stub for fatal */
void   fatal(const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "fatal called!\n"); abort(); }
/* Generated stub for fromwire_channel_dev_memleak_reply */
bool fromwire_channel_dev_memleak_reply(const void *p UNNEEDED, bool *leak UNNEEDED)
{ fprintf(stderr, "fromwire_channel_dev_memleak_reply called!\n"); abort(); }
/* Generated stub for fromwire_connect_peer_connected */
bool fromwire_connect_peer_connected(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct node_id *id UNNEEDED, struct wireaddr_internal *addr UNNEEDED, struct per_peer_state **pps UNNEEDED, u8 **globalfeatures UNNEEDED, u8 **localfeatures UNNEEDED)
{ fprintf(stderr, "fromwire_connect_peer_connected called!\n"); abort(); }
/* Generated stub for fromwire_gossip_get_incoming_channels_reply */
bool fromwire_gossip_get_incoming_channels_reply(const tal_t *ctx UNNEEDED, const void *p UNNEEDED, struct route_info **route_info UNNEEDED)
{ fprintf(stderr, "fromwire_gossip_get_incoming_channels_reply called!\n"); abort(); }
/* Generated stub for fromwire_hsm_get_channel_basepoints_reply */
bool fromwire_hsm_get_channel_basepoints_reply(const void *p UNNEEDED, struct basepoints *basepoints UNNEEDED, struct pubkey *funding_pubkey UNNEEDED)
{ fprintf(stderr, "fromwire_hsm_get_channel_basepoints_reply called!\n"); abort(); }
/* Generated stub for fromwire_hsm_sign_commitment_tx_reply */
bool fromwire_hsm_sign_commitment_tx_reply(const void *p UNNEEDED, struct bitcoin_signature *sig UNNEEDED)
{ fprintf(stderr, "fromwire_hsm_sign_commitment_tx_reply called!\n"); abort(); }
/* Generated stub for fromwire_hsm_sign_invoice_reply */
bool fromwire_hsm_sign_invoice_reply(const void *p UNNEEDED, secp256k1_ecdsa_recoverable_signature *sig UNNEEDED)
{ fprintf(stderr, "fromwire_hsm_sign_invoice_reply called!\n"); abort(); }
/* Generated stub for fromwire_onchain_dev_memleak_reply */
bool fromwire_onchain_dev_memleak_reply(const void *p UNNEEDED, bool *leak UNNEEDED)
{ fprintf(stderr, "fromwire_onchain_dev_memleak_reply called!\n"); abort(); }
/* Generated stub for fulfill_htlc */
void fulfill_htlc(struct htlc_in *hin UNNEEDED, const struct preimage *preimage UNNEEDED)
{ fprintf(stderr, "fulfill_htlc called!\n"); abort(); }
/* Generated stub for get_block_height */
u32 get_block_height(const struct chain_topology *topo UNNEEDED)
{ fprintf(stderr, "get_block_height called!\n"); abort(); }
/* Generated stub for get_chainparams */
const struct chainparams *get_chainparams(const struct lightningd *ld UNNEEDED)
{ fprintf(stderr, "get_chainparams called!\n"); abort(); }
/* Generated stub for get_log_level */
enum log_level get_log_level(struct log_book *lr UNNEEDED)
{ fprintf(stderr, "get_log_level called!\n"); abort(); }
/* Generated stub for htlcs_reconnect */
void htlcs_reconnect(struct lightningd *ld UNNEEDED,
		     struct htlc_in_map *htlcs_in UNNEEDED,
		     struct htlc_out_map *htlcs_out UNNEEDED)
{ fprintf(stderr, "htlcs_reconnect called!\n"); abort(); }
/* Generated stub for json_add_address */
void json_add_address(struct json_stream *response UNNEEDED, const char *fieldname UNNEEDED,
		      const struct wireaddr *addr UNNEEDED)
{ fprintf(stderr, "json_add_address called!\n"); abort(); }
/* Generated stub for json_add_address_internal */
void json_add_address_internal(struct json_stream *response UNNEEDED,
			       const char *fieldname UNNEEDED,
			       const struct wireaddr_internal *addr UNNEEDED)
{ fprintf(stderr, "json_add_address_internal called!\n"); abort(); }
/* Generated stub for json_add_amount_msat_compat */
void json_add_amount_msat_compat(struct json_stream *result UNNEEDED,
				 struct amount_msat msat UNNEEDED,
				 const char *rawfieldname UNNEEDED,
				 const char *msatfieldname)

{ fprintf(stderr, "json_add_amount_msat_compat called!\n"); abort(); }
/* Generated stub for json_add_amount_sat_compat */
void json_add_amount_sat_compat(struct json_stream *result UNNEEDED,
				struct amount_sat sat UNNEEDED,
				const char *rawfieldname UNNEEDED,
				const char *msatfieldname)

{ fprintf(stderr, "json_add_amount_sat_compat called!\n"); abort(); }
/* Generated stub for json_add_bool */
void json_add_bool(struct json_stream *result UNNEEDED, const char *fieldname UNNEEDED,
		   bool value UNNEEDED)
{ fprintf(stderr, "json_add_bool called!\n"); abort(); }
/* Generated stub for json_add_escaped_string */
void json_add_escaped_string(struct json_stream *result UNNEEDED,
			     const char *fieldname UNNEEDED,
			     const struct json_escaped *esc TAKES UNNEEDED)
{ fprintf(stderr, "json_add_escaped_string called!\n"); abort(); }
/* Generated stub for json_add_hex */
void json_add_hex(struct json_stream *result UNNEEDED, const char *fieldname UNNEEDED,
		  const void *data UNNEEDED, size_t len UNNEEDED)
{ fprintf(stderr, "json_add_hex called!\n"); abort(); }
/* Generated stub for json_add_hex_talarr */
void json_add_hex_talarr(struct json_stream *result UNNEEDED,
			 const char *fieldname UNNEEDED,
			 const tal_t *data UNNEEDED)
{ fprintf(stderr, "json_add_hex_talarr called!\n"); abort(); }
/* Generated stub for json_add_log */
void json_add_log(struct json_stream *result UNNEEDED,
		  const struct log_book *lr UNNEEDED, enum log_level minlevel UNNEEDED)
{ fprintf(stderr, "json_add_log called!\n"); abort(); }
/* Generated stub for json_add_member */
void json_add_member(struct json_stream *js UNNEEDED, const char *fieldname UNNEEDED,
		     const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "json_add_member called!\n"); abort(); }
/* Generated stub for json_add_node_id */
void json_add_node_id(struct json_stream *response UNNEEDED,
				const char *fieldname UNNEEDED,
				const struct node_id *id UNNEEDED)
{ fprintf(stderr, "json_add_node_id called!\n"); abort(); }
/* Generated stub for json_add_num */
void json_add_num(struct json_stream *result UNNEEDED, const char *fieldname UNNEEDED,
		  unsigned int value UNNEEDED)
{ fprintf(stderr, "json_add_num called!\n"); abort(); }
/* Generated stub for json_add_short_channel_id */
void json_add_short_channel_id(struct json_stream *response UNNEEDED,
			       const char *fieldname UNNEEDED,
			       const struct short_channel_id *id UNNEEDED)
{ fprintf(stderr, "json_add_short_channel_id called!\n"); abort(); }
/* Generated stub for json_add_string */
void json_add_string(struct json_stream *result UNNEEDED, const char *fieldname UNNEEDED, const char *value UNNEEDED)
{ fprintf(stderr, "json_add_string called!\n"); abort(); }
/* Generated stub for json_add_tx */
void json_add_tx(struct json_stream *result UNNEEDED,
		 const char *fieldname UNNEEDED,
		 const struct bitcoin_tx *tx UNNEEDED)
{ fprintf(stderr, "json_add_tx called!\n"); abort(); }
/* Generated stub for json_add_txid */
void json_add_txid(struct json_stream *result UNNEEDED, const char *fieldname UNNEEDED,
		   const struct bitcoin_txid *txid UNNEEDED)
{ fprintf(stderr, "json_add_txid called!\n"); abort(); }
/* Generated stub for json_add_u64 */
void json_add_u64(struct json_stream *result UNNEEDED, const char *fieldname UNNEEDED,
		  uint64_t value UNNEEDED)
{ fprintf(stderr, "json_add_u64 called!\n"); abort(); }
/* Generated stub for json_add_uncommitted_channel */
void json_add_uncommitted_channel(struct json_stream *response UNNEEDED,
				  const struct uncommitted_channel *uc UNNEEDED)
{ fprintf(stderr, "json_add_uncommitted_channel called!\n"); abort(); }
/* Generated stub for json_array_end */
void json_array_end(struct json_stream *js UNNEEDED)
{ fprintf(stderr, "json_array_end called!\n"); abort(); }
/* Generated stub for json_array_start */
void json_array_start(struct json_stream *js UNNEEDED, const char *fieldname UNNEEDED)
{ fprintf(stderr, "json_array_start called!\n"); abort(); }
/* Generated stub for json_object_end */
void json_object_end(struct json_stream *js UNNEEDED)
{ fprintf(stderr, "json_object_end called!\n"); abort(); }
/* Generated stub for json_object_start */
void json_object_start(struct json_stream *ks UNNEEDED, const char *fieldname UNNEEDED)
{ fprintf(stderr, "json_object_start called!\n"); abort(); }
/* Generated stub for json_stream_fail */
struct json_stream *json_stream_fail(struct command *cmd UNNEEDED,
				     int code UNNEEDED,
				     const char *errmsg UNNEEDED)
{ fprintf(stderr, "json_stream_fail called!\n"); abort(); }
/* Generated stub for json_stream_success */
struct json_stream *json_stream_success(struct command *cmd UNNEEDED)
{ fprintf(stderr, "json_stream_success called!\n"); abort(); }
/* Generated stub for json_tok_address_scriptpubkey */
enum address_parse_result json_tok_address_scriptpubkey(const tal_t *ctx UNNEEDED,
			     const struct chainparams *chainparams UNNEEDED,
			     const char *buffer UNNEEDED,
			     const jsmntok_t *tok UNNEEDED, const u8 **scriptpubkey UNNEEDED)
{ fprintf(stderr, "json_tok_address_scriptpubkey called!\n"); abort(); }
/* Generated stub for json_tok_channel_id */
bool json_tok_channel_id(const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
			 struct channel_id *cid UNNEEDED)
{ fprintf(stderr, "json_tok_channel_id called!\n"); abort(); }
/* Generated stub for json_to_node_id */
bool json_to_node_id(const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
			       struct node_id *id UNNEEDED)
{ fprintf(stderr, "json_to_node_id called!\n"); abort(); }
/* Generated stub for json_to_short_channel_id */
bool json_to_short_channel_id(const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
			      struct short_channel_id *scid UNNEEDED,
			      bool may_be_deprecated_form UNNEEDED)
{ fprintf(stderr, "json_to_short_channel_id called!\n"); abort(); }
/* Generated stub for kill_uncommitted_channel */
void kill_uncommitted_channel(struct uncommitted_channel *uc UNNEEDED,
			      const char *why UNNEEDED)
{ fprintf(stderr, "kill_uncommitted_channel called!\n"); abort(); }
/* Generated stub for log_ */
void log_(struct log *log UNNEEDED, enum log_level level UNNEEDED, const char *fmt UNNEEDED, ...)

{ fprintf(stderr, "log_ called!\n"); abort(); }
/* Generated stub for log_add */
void log_add(struct log *log UNNEEDED, const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "log_add called!\n"); abort(); }
/* Generated stub for log_io */
void log_io(struct log *log UNNEEDED, enum log_level dir UNNEEDED, const char *comment UNNEEDED,
	    const void *data UNNEEDED, size_t len UNNEEDED)
{ fprintf(stderr, "log_io called!\n"); abort(); }
/* Generated stub for new_bolt11 */
struct bolt11 *new_bolt11(const tal_t *ctx UNNEEDED,
			  const struct amount_msat *msat TAKES UNNEEDED)
{ fprintf(stderr, "new_bolt11 called!\n"); abort(); }
/* Generated stub for new_log */
struct log *new_log(const tal_t *ctx UNNEEDED, struct log_book *record UNNEEDED, const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "new_log called!\n"); abort(); }
/* Generated stub for new_log_book */
struct log_book *new_log_book(size_t max_mem UNNEEDED,
			      enum log_level printlevel UNNEEDED)
{ fprintf(stderr, "new_log_book called!\n"); abort(); }
/* Generated stub for new_reltimer_ */
struct oneshot *new_reltimer_(struct timers *timers UNNEEDED,
			      const tal_t *ctx UNNEEDED,
			      struct timerel expire UNNEEDED,
			      void (*cb)(void *) UNNEEDED, void *arg UNNEEDED)
{ fprintf(stderr, "new_reltimer_ called!\n"); abort(); }
/* Generated stub for node_id_cmp */
int node_id_cmp(const struct node_id *a UNNEEDED, const struct node_id *b UNNEEDED)
{ fprintf(stderr, "node_id_cmp called!\n"); abort(); }
/* Generated stub for node_id_to_hexstr */
char *node_id_to_hexstr(const tal_t *ctx UNNEEDED, const struct node_id *id UNNEEDED)
{ fprintf(stderr, "node_id_to_hexstr called!\n"); abort(); }
/* Generated stub for notify_connect */
void notify_connect(struct lightningd *ld UNNEEDED, struct node_id *nodeid UNNEEDED,
		    struct wireaddr_internal *addr UNNEEDED)
{ fprintf(stderr, "notify_connect called!\n"); abort(); }
/* Generated stub for notify_disconnect */
void notify_disconnect(struct lightningd *ld UNNEEDED, struct node_id *nodeid UNNEEDED)
{ fprintf(stderr, "notify_disconnect called!\n"); abort(); }
/* Generated stub for null_response */
struct json_stream *null_response(struct command *cmd UNNEEDED)
{ fprintf(stderr, "null_response called!\n"); abort(); }
/* Generated stub for onchaind_funding_spent */
enum watch_result onchaind_funding_spent(struct channel *channel UNNEEDED,
					 const struct bitcoin_tx *tx UNNEEDED,
					 u32 blockheight UNNEEDED)
{ fprintf(stderr, "onchaind_funding_spent called!\n"); abort(); }
/* Generated stub for param */
bool param(struct command *cmd UNNEEDED, const char *buffer UNNEEDED,
	   const jsmntok_t params[] UNNEEDED, ...)
{ fprintf(stderr, "param called!\n"); abort(); }
/* Generated stub for param_array */
struct command_result *param_array(struct command *cmd UNNEEDED, const char *name UNNEEDED,
				   const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
				   const jsmntok_t **arr UNNEEDED)
{ fprintf(stderr, "param_array called!\n"); abort(); }
/* Generated stub for param_bool */
struct command_result *param_bool(struct command *cmd UNNEEDED, const char *name UNNEEDED,
				  const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
				  bool **b UNNEEDED)
{ fprintf(stderr, "param_bool called!\n"); abort(); }
/* Generated stub for param_escaped_string */
struct command_result *param_escaped_string(struct command *cmd UNNEEDED,
					    const char *name UNNEEDED,
					    const char *buffer UNNEEDED,
					    const jsmntok_t *tok UNNEEDED,
					    const char **str UNNEEDED)
{ fprintf(stderr, "param_escaped_string called!\n"); abort(); }
/* Generated stub for param_label */
struct command_result *param_label(struct command *cmd UNNEEDED, const char *name UNNEEDED,
				   const char * buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
				   struct json_escaped **label UNNEEDED)
{ fprintf(stderr, "param_label called!\n"); abort(); }
/* Generated stub for param_loglevel */
struct command_result *param_loglevel(struct command *cmd UNNEEDED,
				      const char *name UNNEEDED,
				      const char *buffer UNNEEDED,
				      const jsmntok_t *tok UNNEEDED,
				      enum log_level **level UNNEEDED)
{ fprintf(stderr, "param_loglevel called!\n"); abort(); }
/* Generated stub for param_msat */
struct command_result *param_msat(struct command *cmd UNNEEDED, const char *name UNNEEDED,
				  const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
				  struct amount_msat **msat UNNEEDED)
{ fprintf(stderr, "param_msat called!\n"); abort(); }
/* Generated stub for param_node_id */
struct command_result *param_node_id(struct command *cmd UNNEEDED,
					       const char *name UNNEEDED,
					       const char *buffer UNNEEDED,
					       const jsmntok_t *tok UNNEEDED,
					       struct node_id **id UNNEEDED)
{ fprintf(stderr, "param_node_id called!\n"); abort(); }
/* Generated stub for param_number */
struct command_result *param_number(struct command *cmd UNNEEDED, const char *name UNNEEDED,
				    const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
				    unsigned int **num UNNEEDED)
{ fprintf(stderr, "param_number called!\n"); abort(); }
/* Generated stub for param_short_channel_id */
struct command_result *param_short_channel_id(struct command *cmd UNNEEDED,
					      const char *name UNNEEDED,
					      const char *buffer UNNEEDED,
					      const jsmntok_t *tok UNNEEDED,
					      struct short_channel_id **scid UNNEEDED)
{ fprintf(stderr, "param_short_channel_id called!\n"); abort(); }
/* Generated stub for param_string */
struct command_result *param_string(struct command *cmd UNNEEDED, const char *name UNNEEDED,
				    const char * buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
				    const char **str UNNEEDED)
{ fprintf(stderr, "param_string called!\n"); abort(); }
/* Generated stub for param_tok */
struct command_result *param_tok(struct command *cmd UNNEEDED, const char *name UNNEEDED,
				 const char *buffer UNNEEDED, const jsmntok_t * tok UNNEEDED,
				 const jsmntok_t **out UNNEEDED)
{ fprintf(stderr, "param_tok called!\n"); abort(); }
/* Generated stub for param_u64 */
struct command_result *param_u64(struct command *cmd UNNEEDED, const char *name UNNEEDED,
				 const char *buffer UNNEEDED, const jsmntok_t *tok UNNEEDED,
				 uint64_t **num UNNEEDED)
{ fprintf(stderr, "param_u64 called!\n"); abort(); }
/* Generated stub for peer_memleak_done */
void peer_memleak_done(struct command *cmd UNNEEDED, struct subd *leaker UNNEEDED)
{ fprintf(stderr, "peer_memleak_done called!\n"); abort(); }
/* Generated stub for peer_start_channeld */
void peer_start_channeld(struct channel *channel UNNEEDED,
			 struct per_peer_state *pps UNNEEDED,
			 const u8 *funding_signed UNNEEDED,
			 bool reconnected UNNEEDED)
{ fprintf(stderr, "peer_start_channeld called!\n"); abort(); }
/* Generated stub for peer_start_closingd */
void peer_start_closingd(struct channel *channel UNNEEDED,
			 struct per_peer_state *pps UNNEEDED,
			 bool reconnected UNNEEDED,
			 const u8 *channel_reestablish UNNEEDED)
{ fprintf(stderr, "peer_start_closingd called!\n"); abort(); }
/* Generated stub for peer_start_openingd */
void peer_start_openingd(struct peer *peer UNNEEDED,
			 struct per_peer_state *pps UNNEEDED,
			 const u8 *msg UNNEEDED)
{ fprintf(stderr, "peer_start_openingd called!\n"); abort(); }
/* Generated stub for per_peer_state_set_fds */
void per_peer_state_set_fds(struct per_peer_state *pps UNNEEDED,
			    int peer_fd UNNEEDED, int gossip_fd UNNEEDED, int gossip_store_fd UNNEEDED)
{ fprintf(stderr, "per_peer_state_set_fds called!\n"); abort(); }
/* Generated stub for plugin_hook_call_ */
void plugin_hook_call_(struct lightningd *ld UNNEEDED, const struct plugin_hook *hook UNNEEDED,
		       void *payload UNNEEDED, void *cb_arg UNNEEDED)
{ fprintf(stderr, "plugin_hook_call_ called!\n"); abort(); }
/* Generated stub for set_log_outfn_ */
void set_log_outfn_(struct log_book *lr UNNEEDED,
		    void (*print)(const char *prefix UNNEEDED,
				  enum log_level level UNNEEDED,
				  bool continued UNNEEDED,
				  const struct timeabs *time UNNEEDED,
				  const char *str UNNEEDED,
				  const u8 *io UNNEEDED, size_t io_len UNNEEDED,
				  void *arg) UNNEEDED,
		    void *arg UNNEEDED)
{ fprintf(stderr, "set_log_outfn_ called!\n"); abort(); }
/* Generated stub for subd_release_channel */
void subd_release_channel(struct subd *owner UNNEEDED, void *channel UNNEEDED)
{ fprintf(stderr, "subd_release_channel called!\n"); abort(); }
/* Generated stub for subd_req_ */
void subd_req_(const tal_t *ctx UNNEEDED,
	       struct subd *sd UNNEEDED,
	       const u8 *msg_out UNNEEDED,
	       int fd_out UNNEEDED, size_t num_fds_in UNNEEDED,
	       void (*replycb)(struct subd * UNNEEDED, const u8 * UNNEEDED, const int * UNNEEDED, void *) UNNEEDED,
	       void *replycb_data UNNEEDED)
{ fprintf(stderr, "subd_req_ called!\n"); abort(); }
/* Generated stub for subd_send_msg */
void subd_send_msg(struct subd *sd UNNEEDED, const u8 *msg_out UNNEEDED)
{ fprintf(stderr, "subd_send_msg called!\n"); abort(); }
/* Generated stub for towire_channel_dev_memleak */
u8 *towire_channel_dev_memleak(const tal_t *ctx UNNEEDED)
{ fprintf(stderr, "towire_channel_dev_memleak called!\n"); abort(); }
/* Generated stub for towire_channel_dev_reenable_commit */
u8 *towire_channel_dev_reenable_commit(const tal_t *ctx UNNEEDED)
{ fprintf(stderr, "towire_channel_dev_reenable_commit called!\n"); abort(); }
/* Generated stub for towire_channel_send_shutdown */
u8 *towire_channel_send_shutdown(const tal_t *ctx UNNEEDED)
{ fprintf(stderr, "towire_channel_send_shutdown called!\n"); abort(); }
/* Generated stub for towire_channel_specific_feerates */
u8 *towire_channel_specific_feerates(const tal_t *ctx UNNEEDED, u32 feerate_base UNNEEDED, u32 feerate_ppm UNNEEDED)
{ fprintf(stderr, "towire_channel_specific_feerates called!\n"); abort(); }
/* Generated stub for towire_connectctl_connect_to_peer */
u8 *towire_connectctl_connect_to_peer(const tal_t *ctx UNNEEDED, const struct node_id *id UNNEEDED, u32 seconds_waited UNNEEDED, const struct wireaddr_internal *addrhint UNNEEDED)
{ fprintf(stderr, "towire_connectctl_connect_to_peer called!\n"); abort(); }
/* Generated stub for towire_connectctl_peer_disconnected */
u8 *towire_connectctl_peer_disconnected(const tal_t *ctx UNNEEDED, const struct node_id *id UNNEEDED)
{ fprintf(stderr, "towire_connectctl_peer_disconnected called!\n"); abort(); }
/* Generated stub for towire_errorfmt */
u8 *towire_errorfmt(const tal_t *ctx UNNEEDED,
		    const struct channel_id *channel UNNEEDED,
		    const char *fmt UNNEEDED, ...)
{ fprintf(stderr, "towire_errorfmt called!\n"); abort(); }
/* Generated stub for towire_gossip_get_incoming_channels */
u8 *towire_gossip_get_incoming_channels(const tal_t *ctx UNNEEDED, const bool *private_too UNNEEDED)
{ fprintf(stderr, "towire_gossip_get_incoming_channels called!\n"); abort(); }
/* Generated stub for towire_hsm_get_channel_basepoints */
u8 *towire_hsm_get_channel_basepoints(const tal_t *ctx UNNEEDED, const struct node_id *peerid UNNEEDED, u64 dbid UNNEEDED)
{ fprintf(stderr, "towire_hsm_get_channel_basepoints called!\n"); abort(); }
/* Generated stub for towire_hsm_sign_commitment_tx */
u8 *towire_hsm_sign_commitment_tx(const tal_t *ctx UNNEEDED, const struct node_id *peer_id UNNEEDED, u64 channel_dbid UNNEEDED, const struct bitcoin_tx *tx UNNEEDED, const struct pubkey *remote_funding_key UNNEEDED, struct amount_sat funding_amount UNNEEDED)
{ fprintf(stderr, "towire_hsm_sign_commitment_tx called!\n"); abort(); }
/* Generated stub for towire_hsm_sign_invoice */
u8 *towire_hsm_sign_invoice(const tal_t *ctx UNNEEDED, const u8 *u5bytes UNNEEDED, const u8 *hrp UNNEEDED)
{ fprintf(stderr, "towire_hsm_sign_invoice called!\n"); abort(); }
/* Generated stub for towire_onchain_dev_memleak */
u8 *towire_onchain_dev_memleak(const tal_t *ctx UNNEEDED)
{ fprintf(stderr, "towire_onchain_dev_memleak called!\n"); abort(); }
/* Generated stub for txfilter_add_scriptpubkey */
void txfilter_add_scriptpubkey(struct txfilter *filter UNNEEDED, const u8 *script TAKES UNNEEDED)
{ fprintf(stderr, "txfilter_add_scriptpubkey called!\n"); abort(); }
/* Generated stub for version */
const char *version(void)
{ fprintf(stderr, "version called!\n"); abort(); }
/* Generated stub for wallet_channel_delete */
void wallet_channel_delete(struct wallet *w UNNEEDED, u64 wallet_id UNNEEDED)
{ fprintf(stderr, "wallet_channel_delete called!\n"); abort(); }
/* Generated stub for wallet_channel_save */
void wallet_channel_save(struct wallet *w UNNEEDED, struct channel *chan UNNEEDED)
{ fprintf(stderr, "wallet_channel_save called!\n"); abort(); }
/* Generated stub for wallet_channels_load_active */
bool wallet_channels_load_active(struct wallet *w UNNEEDED)
{ fprintf(stderr, "wallet_channels_load_active called!\n"); abort(); }
/* Generated stub for wallet_channel_stats_load */
void wallet_channel_stats_load(struct wallet *w UNNEEDED, u64 cdbid UNNEEDED, struct channel_stats *stats UNNEEDED)
{ fprintf(stderr, "wallet_channel_stats_load called!\n"); abort(); }
/* Generated stub for wallet_channeltxs_add */
void wallet_channeltxs_add(struct wallet *w UNNEEDED, struct channel *chan UNNEEDED,
			    const int type UNNEEDED, const struct bitcoin_txid *txid UNNEEDED,
			   const u32 input_num UNNEEDED, const u32 blockheight UNNEEDED)
{ fprintf(stderr, "wallet_channeltxs_add called!\n"); abort(); }
/* Generated stub for wallet_htlcs_load_for_channel */
bool wallet_htlcs_load_for_channel(struct wallet *wallet UNNEEDED,
				   struct channel *chan UNNEEDED,
				   struct htlc_in_map *htlcs_in UNNEEDED,
				   struct htlc_out_map *htlcs_out UNNEEDED)
{ fprintf(stderr, "wallet_htlcs_load_for_channel called!\n"); abort(); }
/* Generated stub for wallet_invoice_create */
bool wallet_invoice_create(struct wallet *wallet UNNEEDED,
			   struct invoice *pinvoice UNNEEDED,
			   const struct amount_msat *msat TAKES UNNEEDED,
			   const struct json_escaped *label TAKES UNNEEDED,
			   u64 expiry UNNEEDED,
			   const char *b11enc UNNEEDED,
			   const char *description UNNEEDED,
			   const struct preimage *r UNNEEDED,
			   const struct sha256 *rhash UNNEEDED)
{ fprintf(stderr, "wallet_invoice_create called!\n"); abort(); }
/* Generated stub for wallet_invoice_delete */
bool wallet_invoice_delete(struct wallet *wallet UNNEEDED,
			   struct invoice invoice UNNEEDED)
{ fprintf(stderr, "wallet_invoice_delete called!\n"); abort(); }
/* Generated stub for wallet_invoice_delete_expired */
void wallet_invoice_delete_expired(struct wallet *wallet UNNEEDED,
				   u64 max_expiry_time UNNEEDED)
{ fprintf(stderr, "wallet_invoice_delete_expired called!\n"); abort(); }
/* Generated stub for wallet_invoice_details */
const struct invoice_details *wallet_invoice_details(const tal_t *ctx UNNEEDED,
						     struct wallet *wallet UNNEEDED,
						     struct invoice invoice UNNEEDED)
{ fprintf(stderr, "wallet_invoice_details called!\n"); abort(); }
/* Generated stub for wallet_invoice_find_by_label */
bool wallet_invoice_find_by_label(struct wallet *wallet UNNEEDED,
				  struct invoice *pinvoice UNNEEDED,
				  const struct json_escaped *label UNNEEDED)
{ fprintf(stderr, "wallet_invoice_find_by_label called!\n"); abort(); }
/* Generated stub for wallet_invoice_find_by_rhash */
bool wallet_invoice_find_by_rhash(struct wallet *wallet UNNEEDED,
				  struct invoice *pinvoice UNNEEDED,
				  const struct sha256 *rhash UNNEEDED)
{ fprintf(stderr, "wallet_invoice_find_by_rhash called!\n"); abort(); }
/* Generated stub for wallet_invoice_find_unpaid */
bool wallet_invoice_find_unpaid(struct wallet *wallet UNNEEDED,
				struct invoice *pinvoice UNNEEDED,
				const struct sha256 *rhash UNNEEDED)
{ fprintf(stderr, "wallet_invoice_find_unpaid called!\n"); abort(); }
/* Generated stub for wallet_invoice_iterate */
bool wallet_invoice_iterate(struct wallet *wallet UNNEEDED,
			    struct invoice_iterator *it UNNEEDED)
{ fprintf(stderr, "wallet_invoice_iterate called!\n"); abort(); }
/* Generated stub for wallet_invoice_iterator_deref */
const struct invoice_details *wallet_invoice_iterator_deref(const tal_t *ctx UNNEEDED,
			      struct wallet *wallet UNNEEDED,
			      const struct invoice_iterator *it UNNEEDED)
{ fprintf(stderr, "wallet_invoice_iterator_deref called!\n"); abort(); }
/* Generated stub for wallet_invoice_resolve */
void wallet_invoice_resolve(struct wallet *wallet UNNEEDED,
			    struct invoice invoice UNNEEDED,
			    struct amount_msat received UNNEEDED)
{ fprintf(stderr, "wallet_invoice_resolve called!\n"); abort(); }
/* Generated stub for wallet_invoice_waitany */
void wallet_invoice_waitany(const tal_t *ctx UNNEEDED,
			    struct wallet *wallet UNNEEDED,
			    u64 lastpay_index UNNEEDED,
			    void (*cb)(const struct invoice * UNNEEDED, void*) UNNEEDED,
			    void *cbarg UNNEEDED)
{ fprintf(stderr, "wallet_invoice_waitany called!\n"); abort(); }
/* Generated stub for wallet_invoice_waitone */
void wallet_invoice_waitone(const tal_t *ctx UNNEEDED,
			    struct wallet *wallet UNNEEDED,
			    struct invoice invoice UNNEEDED,
			    void (*cb)(const struct invoice * UNNEEDED, void*) UNNEEDED,
			    void *cbarg UNNEEDED)
{ fprintf(stderr, "wallet_invoice_waitone called!\n"); abort(); }
/* Generated stub for wallet_peer_delete */
void wallet_peer_delete(struct wallet *w UNNEEDED, u64 peer_dbid UNNEEDED)
{ fprintf(stderr, "wallet_peer_delete called!\n"); abort(); }
/* Generated stub for wallet_total_forward_fees */
struct amount_msat wallet_total_forward_fees(struct wallet *w UNNEEDED)
{ fprintf(stderr, "wallet_total_forward_fees called!\n"); abort(); }
/* Generated stub for wallet_transaction_locate */
struct txlocator *wallet_transaction_locate(const tal_t *ctx UNNEEDED, struct wallet *w UNNEEDED,
					    const struct bitcoin_txid *txid UNNEEDED)
{ fprintf(stderr, "wallet_transaction_locate called!\n"); abort(); }
/* Generated stub for watch_txid */
struct txwatch *watch_txid(const tal_t *ctx UNNEEDED,
			   struct chain_topology *topo UNNEEDED,
			   struct channel *channel UNNEEDED,
			   const struct bitcoin_txid *txid UNNEEDED,
			   enum watch_result (*cb)(struct lightningd *ld UNNEEDED,
						   struct channel *channel UNNEEDED,
						   const struct bitcoin_txid * UNNEEDED,
						   unsigned int depth))
{ fprintf(stderr, "watch_txid called!\n"); abort(); }
/* Generated stub for watch_txo */
struct txowatch *watch_txo(const tal_t *ctx UNNEEDED,
			   struct chain_topology *topo UNNEEDED,
			   struct channel *channel UNNEEDED,
			   const struct bitcoin_txid *txid UNNEEDED,
			   unsigned int output UNNEEDED,
			   enum watch_result (*cb)(struct channel *channel UNNEEDED,
						   const struct bitcoin_tx *tx UNNEEDED,
						   size_t input_num UNNEEDED,
						   const struct block *block))
{ fprintf(stderr, "watch_txo called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

#if DEVELOPER
/* Generated stub for dev_disconnect_permanent */
bool dev_disconnect_permanent(struct lightningd *ld UNNEEDED)
{ fprintf(stderr, "dev_disconnect_permanent called!\n"); abort(); }
#endif

static void add_inchan(struct route_info **inchans, int n)
{
	struct route_info r;
	memset(&r.pubkey, n, sizeof(r.pubkey));
	memset(&r.short_channel_id, n, sizeof(r.short_channel_id));
	r.fee_base_msat = r.fee_proportional_millionths = r.cltv_expiry_delta
		= n;
	tal_arr_expand(inchans, r);
}

static void add_peer(struct lightningd *ld, int n, enum channel_state state,
		     bool connected)
{
	struct peer *peer = tal(ld, struct peer);
	struct channel *c = tal(peer, struct channel);

	memset(&peer->id, n, sizeof(peer->id));
	list_head_init(&peer->channels);
	list_add_tail(&ld->peers, &peer->list);

	c->state = state;
	c->owner = connected ? (void *)peer : NULL;
	/* Channel has incoming capacity n*1000 - 1 millisatoshi */
	c->funding.satoshis = n+1;
	c->our_msat = AMOUNT_MSAT(1);
	c->our_config.channel_reserve = AMOUNT_SAT(1);
	c->channel_info.their_config.channel_reserve = AMOUNT_SAT(0);
	list_add_tail(&peer->channels, &c->list);
}

/* There *is* padding in this structure, after pubkey and after cltv_expiry_delta. */
STRUCTEQ_DEF(route_info,
	     ALIGNOF(struct short_channel_id) - 1 - sizeof(u16),
	     pubkey,
	     cltv_expiry_delta,
	     short_channel_id,
	     fee_base_msat,
	     fee_proportional_millionths);

int main(void)
{
	struct lightningd *ld;
	bool any_offline;
	struct route_info *inchans;
	struct route_info **ret;
	size_t n;

	setup_locale();
	secp256k1_ctx = secp256k1_context_create(SECP256K1_CONTEXT_VERIFY
						 | SECP256K1_CONTEXT_SIGN);
	setup_tmpctx();
	ld = tal(tmpctx, struct lightningd);

	list_head_init(&ld->peers);

	inchans = tal_arr(tmpctx, struct route_info, 0);
	/* 1. Nothing to choose from -> NULL result. */
	assert(select_inchan(tmpctx, ld, AMOUNT_MSAT(0), inchans, &any_offline) == NULL);
	assert(any_offline == false);

	/* 2. inchan but no corresponding peer -> NULL result. */
	add_inchan(&inchans, 0);
	assert(select_inchan(tmpctx, ld, AMOUNT_MSAT(0), inchans, &any_offline) == NULL);
	assert(any_offline == false);

	/* 3. inchan but its peer in awaiting lockin -> NULL result. */
	add_peer(ld, 0, CHANNELD_AWAITING_LOCKIN, true);
	assert(select_inchan(tmpctx, ld, AMOUNT_MSAT(0), inchans, &any_offline) == NULL);
	assert(any_offline == false);

	/* 4. connected peer but no corresponding inchan -> NULL result. */
	add_peer(ld, 1, CHANNELD_NORMAL, true);
	assert(select_inchan(tmpctx, ld, AMOUNT_MSAT(0), inchans, &any_offline) == NULL);
	assert(any_offline == false);

	/* 5. inchan but its peer (replaced with one) offline -> NULL result. */
	list_del_from(&ld->peers, &list_tail(&ld->peers, struct peer, list)->list);
	add_peer(ld, 1, CHANNELD_NORMAL, false);
	add_inchan(&inchans, 1);
	assert(select_inchan(tmpctx, ld, AMOUNT_MSAT(0), inchans, &any_offline) == NULL);
	assert(any_offline == true);

	/* 6. Finally, a correct peer! */
	add_inchan(&inchans, 2);
	add_peer(ld, 2, CHANNELD_NORMAL, true);

	ret = select_inchan(tmpctx, ld, AMOUNT_MSAT(0), inchans, &any_offline);
	assert(tal_count(ret) == 1);
	assert(tal_count(ret[0]) == 1);
	assert(any_offline == true); /* Peer 1 is offline */
	assert(route_info_eq(ret[0], &inchans[2]));

	/* 7. Correct peer with just enough capacity_to_pay_us */
	ret = select_inchan(tmpctx, ld, AMOUNT_MSAT(1999), inchans, &any_offline);
	assert(tal_count(ret) == 1);
	assert(tal_count(ret[0]) == 1);
	assert(any_offline == false); /* Other candidate insufficient funds. */
	assert(route_info_eq(ret[0], &inchans[2]));

	/* 8. Not if we ask for too much! Our balance is 1msat. */
	ret = select_inchan(tmpctx, ld, AMOUNT_MSAT(2000), inchans, &any_offline);
	assert(ret == NULL);
	assert(any_offline == false); /* Other candidate insufficient funds. */

	/* 9. Add another peer */
	add_inchan(&inchans, 3);
	add_peer(ld, 3, CHANNELD_NORMAL, true);

	/* Simulate selection ratios between excesses 25% and 50% of capacity*/
	for (size_t i = n = 0; i < 1000; i++) {
		ret = select_inchan(tmpctx, ld, AMOUNT_MSAT(1499), inchans, &any_offline);
		assert(tal_count(ret) == 1);
		assert(tal_count(ret[0]) == 1);
		assert(any_offline == false); /* Other candidate insufficient funds. */
		assert(route_info_eq(ret[0], &inchans[2])
		       || route_info_eq(ret[0], &inchans[3]));
		n += route_info_eq(ret[0], &inchans[2]);
	}

	/* Handwave over probability of this happening!  Within 20% */
	printf("Number of selections with excess 25 percent of capacity: %zu\n"
	       "Number of selections with excess 50 percent of capacity: %zu\n",
	       n, 1000 - n);
	assert(n > 333 - 66 && n < 333 + 66);

	/* 10. Last peer's capacity goes from 3 to 2 sat*/
		list_tail(&list_tail(&ld->peers, struct peer, list)->channels, struct channel, list)->
				channel_info.their_config.channel_reserve = AMOUNT_SAT(1);
		ret = select_inchan(tmpctx, ld, AMOUNT_MSAT(1499), inchans, &any_offline);

		/* Simulate selection ratios between excesses 25% and 75% of capacity*/
	for (size_t i = n = 0; i < 1000; i++) {
		ret = select_inchan(tmpctx, ld, AMOUNT_MSAT(1499), inchans, &any_offline);
		assert(tal_count(ret) == 1);
		assert(tal_count(ret[0]) == 1);
		assert(any_offline == false); /* Other candidate insufficient funds. */
		assert(route_info_eq(ret[0], &inchans[2])
		       || route_info_eq(ret[0], &inchans[3]));
		n += route_info_eq(ret[0], &inchans[2]);
	}

	/* Handwave over probability of this happening!  Within 20% */
	printf("Number of selections with excess 25 percent of capacity: %zu\n"
	       "Number of selections with excess 75 percent of capacity: %zu\n",
	       n, 1000 - n);
	assert(n > 250 - 50 && n < 250 + 50);

	/* No memory leaks please */
	secp256k1_context_destroy(secp256k1_ctx);
	tal_free(tmpctx);

	/* FIXME: Do BOLT comparison! */
	return 0;
}
