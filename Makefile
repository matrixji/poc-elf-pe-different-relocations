test_app: c.cc libb.so
	g++ -o $@ $^ -lb

libb.so: a.h b.cc
	g++ -o $@ -fPIC -shared b.cc
