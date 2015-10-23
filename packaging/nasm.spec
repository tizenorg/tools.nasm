# -*- coding: utf-8 -*-
Summary: A portable x86 assembler which uses Intel-like syntax
Name: nasm
Version: 2.08rc7
Release: %{?release_prefix:%{release_prefix}.}2.45.%{?dist}%{!?dist:tizen}
VCS:     external/nasm#Z910F_PROTEX_0625-2-gdd716a1df64cbdcdcdd6979226070bd8db36a50e
License: simplified BSD license
Group: Development/Languages
URL: http://nasm.sourceforge.net/
Source0: nasm-%{version}.tar.bz2
Source1: nasm-%{version}-xdoc.tar.bz2
Source2: nasm.sh
BuildRequires: perl

%package rdoff
Summary: Tools for the RDOFF binary format, sometimes used with NASM
Group: Development/Tools

%description
NASM is the Netwide Assembler, a free portable assembler for the Intel
80x86 microprocessor series, using primarily the traditional Intel
instruction mnemonics and syntax.

%description rdoff
Tools for the operating-system independent RDOFF binary format, which
is sometimes used with the Netwide Assembler (NASM). These tools
include linker, library manager, loader, and information dump.

%prep
%setup -q
tar xjf %{SOURCE1} --strip-components 1

%build
%configure
make all %{?_smp_mflags}

%install
rm -rf $RPM_BUILD_ROOT
mkdir -p $RPM_BUILD_ROOT%{_bindir}
mkdir -p $RPM_BUILD_ROOT/%{_mandir}/man1
make INSTALLROOT=$RPM_BUILD_ROOT install install_rdf
install -d $RPM_BUILD_ROOT/etc/profile.d
cp %{SOURCE2} $RPM_BUILD_ROOT/etc/profile.d/ 


%remove_docs

%files
%{_bindir}/nasm
%{_bindir}/ndisasm
/etc/profile.d/nasm.sh


%files rdoff
%defattr(-,root,root)
%{_bindir}/ldrdf
%{_bindir}/rdf2bin
%{_bindir}/rdf2ihx
%{_bindir}/rdf2com
%{_bindir}/rdfdump
%{_bindir}/rdflib
%{_bindir}/rdx
%{_bindir}/rdf2ith
%{_bindir}/rdf2srec

%changelog
* Sat Jun 28 2014 SLP SCM <slpsystem.m@samsung.com> - None 
- PROJECT: external/nasm
- COMMIT_ID: dd716a1df64cbdcdcdd6979226070bd8db36a50e
- BRANCH: master
- PATCHSET_REVISION: dd716a1df64cbdcdcdd6979226070bd8db36a50e
- CHANGE_OWNER: \"UkJung Kim\" <ujkim@samsung.com>
- PATCHSET_UPLOADER: \"UkJung Kim\" <ujkim@samsung.com>
- CHANGE_URL: http://slp-info.sec.samsung.net/gerrit/534340
- PATCHSET_REVISION: dd716a1df64cbdcdcdd6979226070bd8db36a50e
- TAGGER: SLP SCM <slpsystem.m@samsung.com>
- Gerrit patchset approval info:
- UkJung Kim <ujkim@samsung.com> Verified : 1
- Newton Lee <newton.lee@samsung.com> Code-Review : 2
- Newton Lee <newton.lee@samsung.com> Verified : 1
- CHANGE_SUBJECT: Merged x86_64 support to master
- Merged x86_64 support to master
* Mon Sep 16 2013 UkJung Kim <ujkim@samsung.com> - submit/trunk/20121024.015150 
- PROJECT: external/nasm
- COMMIT_ID: d42cc863abb17eb13f8a76d076e573820d868ad4
- PATCHSET_REVISION: d42cc863abb17eb13f8a76d076e573820d868ad4
- CHANGE_OWNER: \"UkJung Kim\" <ujkim@samsung.com>
- PATCHSET_UPLOADER: \"UkJung Kim\" <ujkim@samsung.com>
- CHANGE_URL: http://slp-info.sec.samsung.net/gerrit/104682
- PATCHSET_REVISION: d42cc863abb17eb13f8a76d076e573820d868ad4
- TAGGER: UkJung Kim <ujkim@samsung.com>
- Gerrit patchset approval info:
- UkJung Kim <ujkim@samsung.com> Verified : 1
- Newton Lee <newton.lee@samsung.com> Code Review : 2
- CHANGE_SUBJECT: Git OBS Sync
- [Version] 2.08rc7
- [Project] GT-I8800
- [Title] Git OBS Sync
- [BinType] PDA
- [Customer] Open
- [Issue#] N/A
- [Problem] N/A
- [Cause] N/A
- [Solution]
- [Team] SCM
- [Developer] UkJung Kim <ujkim@samsung.com>
- [Request] N/A
- [Horizontal expansion] N/A
- [SCMRequest] N/A
