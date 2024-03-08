#pragma once

// this can be in a header file, so that other classes can use the event type
wxDECLARE_EVENT(EVT_MALWARE_SCAN_STATUS, wxThreadEvent);
wxDECLARE_EVENT(EVT_MALWARE_SCAN_ERROR, wxThreadEvent);
wxDECLARE_EVENT(EVT_MALWARE_SCAN_FINISH, wxThreadEvent);
wxDECLARE_EVENT(EVT_MALWARE_SCAN_NEWFILE, wxThreadEvent);
wxDECLARE_EVENT(EVT_MALWARE_SCHEDULED, wxThreadEvent);
wxDECLARE_EVENT(EVT_MALWARE_SCAN_FOUND, wxThreadEvent);
wxDECLARE_EVENT(EVT_MALWARE_DELETE_FILE, wxThreadEvent);
wxDECLARE_EVENT(EVT_MALWARE_DELETE_FINISH, wxThreadEvent);
wxDECLARE_EVENT(EVT_RECOVERY_FILE, wxThreadEvent);
