LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES:= \
	CppThreadTest.cpp

LOCAL_SHARED_LIBRARIES := \
	libcutils  \
	libutils 

	
LOCAL_MODULE:= CppThreadTest
#-Wno-unused-parameter:去除未使用参数报错问题
LOCAL_CFLAGS:= -Wno-unused-parameter
LOCAL_MODULE_TAGS := tests

include $(BUILD_EXECUTABLE)