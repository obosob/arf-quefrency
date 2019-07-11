SRC = $(shell find keyboards -type f)

COPIED = $(addprefix ../qmk_firmware/,$(SRC))

DIRS = $(sort $(foreach file,$(COPIED),$(dir $(file))))

.PHONY: flash

keebio_quefrency_rev1_arf.hex: ../qmk_firmware/keebio_quefrency_rev1_arf.hex
	cp $< $@

../qmk_firmware/keebio_quefrency_rev1_arf.hex: $(COPIED)
	make -C ../qmk_firmware keebio/quefrency/rev1:arf

flash: $(COPIED)
	make -C ../qmk_firmware keebio/quefrency/rev1:arf:avrdude

$(DIRS):
	mkdir -p $@

define make-goal
../qmk_firmware/$1: $1 | ../qmk_firmware/$2
	cp $$< $$@
endef

$(foreach file,$(SRC),$(eval $(call make-goal,$(file),$(dir $(file)))))
