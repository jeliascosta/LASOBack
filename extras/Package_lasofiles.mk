#ADD LIBRAS
$(eval $(call gb_Package_Package,laso_files,$(SRCDIR)/LASOFront_dist))

$(eval $(call gb_Package_add_files,laso_files,$(LIBO_BIN_FOLDER),\
    LIBRASOffice.exe \
    librasoffice.jar \
))
#END LIBRAS
