#include <hdf5.h>

herr_t H5ARRAYOopen_readSlice( hid_t *dataset_id,
			       hid_t *space_id,
			       hid_t *type_id,
			       hid_t loc_id, 
			       const char *dset_name);

herr_t H5ARRAYOread_readSlice( hid_t dataset_id,
			       hid_t space_id,
			       hid_t type_id,
			       hsize_t irow,
			       hsize_t start,
			       hsize_t stop,
			       void *data );

herr_t H5ARRAYOclose_readSlice(hid_t dataset_id,
			       hid_t space_id,
			       hid_t type_id);