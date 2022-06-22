/**
 * Name: MIRM
 * Version: 0623
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ObjectDelivererManager.SendTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              DataBuffer                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UObjectDelivererProtocol*                    target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UObjectDelivererManager::SendTo(TArray<unsigned char> DataBuffer, class UObjectDelivererProtocol* target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ObjectDelivererManager.SendTo");
		
		UObjectDelivererManager_SendTo_Params params {};
		params.DataBuffer = DataBuffer;
		params.target = target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ObjectDelivererManager.Send
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              DataBuffer                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bForcedSend                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UObjectDelivererManager::Send(TArray<unsigned char> DataBuffer, bool bForcedSend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ObjectDelivererManager.Send");
		
		UObjectDelivererManager_Send_Params params {};
		params.DataBuffer = DataBuffer;
		params.bForcedSend = bForcedSend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ObjectDelivererManager.IsConnected
	 * 		Flags  -> ()
	 */
	bool UObjectDelivererManager::IsConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ObjectDelivererManager.IsConnected");
		
		UObjectDelivererManager_IsConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ObjectDelivererManager.Close
	 * 		Flags  -> ()
	 */
	void UObjectDelivererManager::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ObjectDelivererManager.Close");
		
		UObjectDelivererManager_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UObjectDelivererManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectDelivererManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.ObjectDelivererManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UObjectDelivererProtocol.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectDelivererProtocol::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.ObjectDelivererProtocol");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UObjectJsonSerializer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectJsonSerializer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.ObjectJsonSerializer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UObjectUtil.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectUtil::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.ObjectUtil");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPacketRule.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPacketRule::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.PacketRule");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.PacketRuleFactory.CreatePacketRuleTerminate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              Terminate                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UPacketRuleTerminate* UPacketRuleFactory::CreatePacketRuleTerminate(TArray<unsigned char> Terminate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.PacketRuleFactory.CreatePacketRuleTerminate");
		
		UPacketRuleFactory_CreatePacketRuleTerminate_Params params {};
		params.Terminate = Terminate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.PacketRuleFactory.CreatePacketRuleSizeBody
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SizeLength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECNBufferEndian                                    SizeBufferEndian                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPacketRuleSizeBody* UPacketRuleFactory::CreatePacketRuleSizeBody(int32_t SizeLength, ECNBufferEndian SizeBufferEndian)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.PacketRuleFactory.CreatePacketRuleSizeBody");
		
		UPacketRuleFactory_CreatePacketRuleSizeBody_Params params {};
		params.SizeLength = SizeLength;
		params.SizeBufferEndian = SizeBufferEndian;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.PacketRuleFactory.CreatePacketRuleNodivision
	 * 		Flags  -> ()
	 */
	class UPacketRuleNodivision* UPacketRuleFactory::CreatePacketRuleNodivision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.PacketRuleFactory.CreatePacketRuleNodivision");
		
		UPacketRuleFactory_CreatePacketRuleNodivision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.PacketRuleFactory.CreatePacketRuleFixedLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FixedSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPacketRuleFixedLength* UPacketRuleFactory::CreatePacketRuleFixedLength(int32_t FixedSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.PacketRuleFactory.CreatePacketRuleFixedLength");
		
		UPacketRuleFactory_CreatePacketRuleFixedLength_Params params {};
		params.FixedSize = FixedSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPacketRuleFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPacketRuleFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.PacketRuleFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPacketRuleFixedLength.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPacketRuleFixedLength::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.PacketRuleFixedLength");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPacketRuleNodivision.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPacketRuleNodivision::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.PacketRuleNodivision");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPacketRuleSizeBody.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPacketRuleSizeBody::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.PacketRuleSizeBody");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPacketRuleTerminate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPacketRuleTerminate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.PacketRuleTerminate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ProtocolFactory.CreateProtocolUdpSocketSender
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      IpAddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UProtocolUdpSocketSender* UProtocolFactory::CreateProtocolUdpSocketSender(const class FString& IpAddress, int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ProtocolFactory.CreateProtocolUdpSocketSender");
		
		UProtocolFactory_CreateProtocolUdpSocketSender_Params params {};
		params.IpAddress = IpAddress;
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ProtocolFactory.CreateProtocolUdpSocketReceiver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BoundPort                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UProtocolUdpSocketReceiver* UProtocolFactory::CreateProtocolUdpSocketReceiver(int32_t BoundPort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ProtocolFactory.CreateProtocolUdpSocketReceiver");
		
		UProtocolFactory_CreateProtocolUdpSocketReceiver_Params params {};
		params.BoundPort = BoundPort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ProtocolFactory.CreateProtocolTcpIpServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UProtocolTcpIpServer* UProtocolFactory::CreateProtocolTcpIpServer(int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ProtocolFactory.CreateProtocolTcpIpServer");
		
		UProtocolFactory_CreateProtocolTcpIpServer_Params params {};
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ProtocolFactory.CreateProtocolTcpIpClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      IpAddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Retry                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UProtocolTcpIpClient* UProtocolFactory::CreateProtocolTcpIpClient(const class FString& IpAddress, int32_t Port, bool Retry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ProtocolFactory.CreateProtocolTcpIpClient");
		
		UProtocolFactory_CreateProtocolTcpIpClient_Params params {};
		params.IpAddress = IpAddress;
		params.Port = Port;
		params.Retry = Retry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ProtocolFactory.CreateProtocolSharedMemory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SharedMemoryName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SharedMemorySize                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UProtocolSharedMemory* UProtocolFactory::CreateProtocolSharedMemory(const class FString& SharedMemoryName, int32_t SharedMemorySize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ProtocolFactory.CreateProtocolSharedMemory");
		
		UProtocolFactory_CreateProtocolSharedMemory_Params params {};
		params.SharedMemoryName = SharedMemoryName;
		params.SharedMemorySize = SharedMemorySize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ProtocolFactory.CreateProtocolLogWriter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PathIsAbsolute                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UProtocolLogWriter* UProtocolFactory::CreateProtocolLogWriter(const class FString& FilePath, bool PathIsAbsolute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ProtocolFactory.CreateProtocolLogWriter");
		
		UProtocolFactory_CreateProtocolLogWriter_Params params {};
		params.FilePath = FilePath;
		params.PathIsAbsolute = PathIsAbsolute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ProtocolFactory.CreateProtocolLogReader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PathIsAbsolute                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CutFirstInterval                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UProtocolLogReader* UProtocolFactory::CreateProtocolLogReader(const class FString& FilePath, bool PathIsAbsolute, bool CutFirstInterval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ProtocolFactory.CreateProtocolLogReader");
		
		UProtocolFactory_CreateProtocolLogReader_Params params {};
		params.FilePath = FilePath;
		params.PathIsAbsolute = PathIsAbsolute;
		params.CutFirstInterval = CutFirstInterval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProtocolFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProtocolFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.ProtocolFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ProtocolLogReader.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PathIsAbsolute                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CutFirstInterval                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProtocolLogReader::Initialize(const class FString& FilePath, bool PathIsAbsolute, bool CutFirstInterval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ProtocolLogReader.Initialize");
		
		UProtocolLogReader_Initialize_Params params {};
		params.FilePath = FilePath;
		params.PathIsAbsolute = PathIsAbsolute;
		params.CutFirstInterval = CutFirstInterval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProtocolLogReader.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProtocolLogReader::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.ProtocolLogReader");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ProtocolLogWriter.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PathIsAbsolute                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProtocolLogWriter::Initialize(const class FString& FilePath, bool PathIsAbsolute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ProtocolLogWriter.Initialize");
		
		UProtocolLogWriter_Initialize_Params params {};
		params.FilePath = FilePath;
		params.PathIsAbsolute = PathIsAbsolute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProtocolLogWriter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProtocolLogWriter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.ProtocolLogWriter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ProtocolSharedMemory.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SharedMemoryName                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SharedMemorySize                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProtocolSharedMemory::Initialize(const class FString& SharedMemoryName, int32_t SharedMemorySize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ProtocolSharedMemory.Initialize");
		
		UProtocolSharedMemory_Initialize_Params params {};
		params.SharedMemoryName = SharedMemoryName;
		params.SharedMemorySize = SharedMemorySize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProtocolSharedMemory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProtocolSharedMemory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.ProtocolSharedMemory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProtocolSocketBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProtocolSocketBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.ProtocolSocketBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProtocolTcpIpSocket.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProtocolTcpIpSocket::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.ProtocolTcpIpSocket");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ProtocolTcpIpClient.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      IpAddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Retry                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProtocolTcpIpClient::Initialize(const class FString& IpAddress, int32_t Port, bool Retry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ProtocolTcpIpClient.Initialize");
		
		UProtocolTcpIpClient_Initialize_Params params {};
		params.IpAddress = IpAddress;
		params.Port = Port;
		params.Retry = Retry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProtocolTcpIpClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProtocolTcpIpClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.ProtocolTcpIpClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ProtocolTcpIpServer.ReceiveDataFromClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObjectDelivererProtocol*                    ClientSocket                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              buffer                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UProtocolTcpIpServer::ReceiveDataFromClient(class UObjectDelivererProtocol* ClientSocket, TArray<unsigned char> buffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ProtocolTcpIpServer.ReceiveDataFromClient");
		
		UProtocolTcpIpServer_ReceiveDataFromClient_Params params {};
		params.ClientSocket = ClientSocket;
		params.buffer = buffer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ProtocolTcpIpServer.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProtocolTcpIpServer::Initialize(int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ProtocolTcpIpServer.Initialize");
		
		UProtocolTcpIpServer_Initialize_Params params {};
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ProtocolTcpIpServer.DisconnectedClient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObjectDelivererProtocol*                    ClientSocket                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProtocolTcpIpServer::DisconnectedClient(class UObjectDelivererProtocol* ClientSocket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ProtocolTcpIpServer.DisconnectedClient");
		
		UProtocolTcpIpServer_DisconnectedClient_Params params {};
		params.ClientSocket = ClientSocket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProtocolTcpIpServer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProtocolTcpIpServer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.ProtocolTcpIpServer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ProtocolUdpSocketReceiver.InitializeWithReceiver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            BoundPort                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProtocolUdpSocketReceiver::InitializeWithReceiver(int32_t BoundPort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ProtocolUdpSocketReceiver.InitializeWithReceiver");
		
		UProtocolUdpSocketReceiver_InitializeWithReceiver_Params params {};
		params.BoundPort = BoundPort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProtocolUdpSocketReceiver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProtocolUdpSocketReceiver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.ProtocolUdpSocketReceiver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.ProtocolUdpSocketSender.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      IpAddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProtocolUdpSocketSender::Initialize(const class FString& IpAddress, int32_t Port)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.ProtocolUdpSocketSender.Initialize");
		
		UProtocolUdpSocketSender_Initialize_Params params {};
		params.IpAddress = IpAddress;
		params.Port = Port;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UProtocolUdpSocketSender.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProtocolUdpSocketSender::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.ProtocolUdpSocketSender");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.StringUtil.StringToBuffer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              DataBuffer                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UStringUtil::StringToBuffer(const class FString& Message, TArray<unsigned char>* DataBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.StringUtil.StringToBuffer");
		
		UStringUtil_StringToBuffer_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataBuffer != nullptr)
			*DataBuffer = params.DataBuffer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ObjectDeliverer.StringUtil.BufferToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              DataBuffer                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UStringUtil::BufferToString(TArray<unsigned char> DataBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ObjectDeliverer.StringUtil.BufferToString");
		
		UStringUtil_BufferToString_Params params {};
		params.DataBuffer = DataBuffer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStringUtil.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStringUtil::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ObjectDeliverer.StringUtil");
		return ptr;
	}

}


