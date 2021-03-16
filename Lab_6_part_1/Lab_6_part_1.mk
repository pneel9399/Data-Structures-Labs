##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Lab_6_part_1
ConfigurationName      :=Debug
WorkspacePath          :=C:/test_for_c/myworkspace
ProjectPath            :=C:/test_for_c/myworkspace/Lab_6_part_1
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Neel Patel
Date                   :=11/10/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Lab_6_part_1.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/checks_lists.cpp$(ObjectSuffix) $(IntermediateDirectory)/node1.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_lab_6_part_2_bag3.cpp$(ObjectSuffix) $(IntermediateDirectory)/up_lab_6_part_2_main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/checks_lists.cpp$(ObjectSuffix): checks_lists.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/checks_lists.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/checks_lists.cpp$(DependSuffix) -MM checks_lists.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/test_for_c/myworkspace/Lab_6_part_1/checks_lists.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/checks_lists.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/checks_lists.cpp$(PreprocessSuffix): checks_lists.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/checks_lists.cpp$(PreprocessSuffix) checks_lists.cpp

$(IntermediateDirectory)/node1.cpp$(ObjectSuffix): node1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/node1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/node1.cpp$(DependSuffix) -MM node1.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/test_for_c/myworkspace/Lab_6_part_1/node1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/node1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/node1.cpp$(PreprocessSuffix): node1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/node1.cpp$(PreprocessSuffix) node1.cpp

$(IntermediateDirectory)/up_lab_6_part_2_bag3.cpp$(ObjectSuffix): ../lab_6_part_2/bag3.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_lab_6_part_2_bag3.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_lab_6_part_2_bag3.cpp$(DependSuffix) -MM ../lab_6_part_2/bag3.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/test_for_c/myworkspace/lab_6_part_2/bag3.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_lab_6_part_2_bag3.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_lab_6_part_2_bag3.cpp$(PreprocessSuffix): ../lab_6_part_2/bag3.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_lab_6_part_2_bag3.cpp$(PreprocessSuffix) ../lab_6_part_2/bag3.cpp

$(IntermediateDirectory)/up_lab_6_part_2_main.cpp$(ObjectSuffix): ../lab_6_part_2/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/up_lab_6_part_2_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/up_lab_6_part_2_main.cpp$(DependSuffix) -MM ../lab_6_part_2/main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/test_for_c/myworkspace/lab_6_part_2/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/up_lab_6_part_2_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/up_lab_6_part_2_main.cpp$(PreprocessSuffix): ../lab_6_part_2/main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/up_lab_6_part_2_main.cpp$(PreprocessSuffix) ../lab_6_part_2/main.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


