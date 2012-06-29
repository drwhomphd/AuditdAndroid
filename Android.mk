LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

MY_ROOT_PATH := external/android_audit

LOCAL_MODULE := auditctl
LOCAL_MODULE_TAGS := eng
LOCAL_SRC_FILES:= lib/libaudit.c \
			lib/message.c \
			lib/netlink.c \
			lib/lookup_table.c \
			lib/audit_logging.c \
			lib/deprecated.c \
			src/auditctl.c \
			src/auditctl-llist.c \
			src/delete_all.c


LOCAL_C_INCLUDES :=	$(MY_ROOT_PATH) \
			$(MY_ROOT_PATH)/lib \
			$(MY_ROOT_PATH)/kernel \
			$(MY_ROOT_PATH)/src

LOCAL_CFLAGS :=  -fPIE -DPIE -g -D_GNU_SOURCE -fno-strict-aliasing 

LOCAL_LDLIBS := -lm -lpthread 

include $(BUILD_EXECUTABLE)
