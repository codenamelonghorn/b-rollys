
default view v: 
	( cd $(NINMG_DIR)/Examples/view ; make clean MODELDIR=$(PWD) ; make MODELDIR=$(PWD) )
	emulate viewdb rom_view

fly f:
	( cd $(NINMG_DIR)/Examples/fly ; make clean MODELDIR=$(PWD) ; make MODELDIR=$(PWD) )
	emulate flydb rom_fly

topgun t:
	( cd $(NINMG_DIR)/Examples/topgun ; make clean MODELDIR=$(PWD) ; make MODELDIR=$(PWD) )
	emulate topgun rom_topgun

run_view rv:
	emulate viewdb rom_view

run_fly rf:
	emulate flydb rom_fly

run_topgun rt:
	emulate topgun rom_topgun

clean:
	rm -rf *.o topgun rom_topgun flydb rom_fly viewdb rom_view
