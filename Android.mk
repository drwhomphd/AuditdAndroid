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
			$(MY_ROOT_PATH)/libc \
			$(MY_ROOT_PATH)/kernel \
			$(MY_ROOT_PATH)/src

LOCAL_CFLAGS :=  -fPIE -DPIE -g -D_GNU_SOURCE -fno-strict-aliasing 

LOCAL_SHARED_LIBRARIES := libc libcutils 

include $(BUILD_EXECUTABLE)

include $(CLEAR_VARS)

MY_ROOT_PATH := external/android_audit

LOCAL_MODULE := auditd
LOCAL_MODULE_TAGS := eng
LOCAL_SRC_FILES:= lib/libaudit.c \
			lib/message.c \
			lib/netlink.c \
			lib/lookup_table.c \
			lib/audit_logging.c \
			lib/deprecated.c \
			src/auditd.c \
			src/auditd-event.c \
			src/auditd-config.c \
			src/auditd-reconfig.c \
			src/auditd-sendmail.c \
			src/auditd-dispatch.c \
			src/auditd-listen.c \
			src/ev.c \
			src/event.c


LOCAL_C_INCLUDES :=	$(MY_ROOT_PATH) \
			$(MY_ROOT_PATH)/lib \
			$(MY_ROOT_PATH)/libc \
			$(MY_ROOT_PATH)/kernel \
			$(MY_ROOT_PATH)/src

LOCAL_CFLAGS :=  -fPIE -DPIE -g -D_GNU_SOURCE -fno-strict-aliasing 

LOCAL_SHARED_LIBRARIES := libc libcutils


include $(BUILD_EXECUTABLE)
