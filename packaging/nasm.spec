# -*- coding: utf-8 -*-
Summary: A portable x86 assembler which uses Intel-like syntax
Name: nasm
Version: 2.08rc7
Release: 2.1
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
make all

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
* Sat Apr 10 2010 Anas Nashif <anas.nashif@intel.com> - 2.08rc7
- Fixed rpmlint errors
* Tue Feb  9 2010 Arjan van de Ven <arjan@linux.intel.com> 2.08rc5
- add nasm env variable script
* Mon Feb  8 2010 Austin Zhang <austin.zhang@intel.com> 2.08rc7
- Update to 2.08rc7
* Tue Nov  3 2009 Austin Zhang <austin.zhang@intel.com> 2.08rc5
- Update to 2.08rc5
* Wed Sep  9 2009 Passion Zhao <passion.zhao@intel.com> - 2.0.7-1
- Update to 2.0.7 to address CVE-2008-7177
- Remove upstreamed patch: nasm-CVE-2008-2719.patch
* Thu Jan 22 2009 Passion Zhao <passion.zhao@intel.com> 2.01-2
- Fix CVE-2008-2719
* Thu Sep 18 2008 Austin Zhang <austin.zhang@intel.com> 2.01
- add check for the info file before installation
* Tue Feb 19 2008 Fedora Release Engineering <rel-eng@fedoraproject.org> - 2.01-2
- Autorebuild for GCC 4.3
* Tue Jan 29 2008 Petr Machata <pmachata@redhat.com> - 2.01-1
- rebase to a new stable upstream version 2.01
* Wed Feb  7 2007 Petr Machata <pmachata@redhat.com> - 0.98.39-5
- tidy up the specfile per rpmlint comments
- use utf-8 and fix national characters in contributor's names
- port bogus elf patch to new nasm version and turn it on again
* Thu Jan 25 2007 Petr Machata <pmachata@redhat.com> - 0.98.39-4
- Ville Skyttä: patch for non-failing %%%%post, %%%%preun
- Resolves: #223714
* Wed Jul 12 2006 Jesse Keating <jkeating@redhat.com> - 0.98.39-3.2.2
- rebuild
* Fri Feb 10 2006 Jesse Keating <jkeating@redhat.com> - 0.98.39-3.2.1
- bump again for double-long bug on ppc(64)
* Tue Feb  7 2006 Jesse Keating <jkeating@redhat.com> - 0.98.39-3.2
- rebuilt for new gcc4.1 snapshot and glibc changes
* Fri Dec  9 2005 Jesse Keating <jkeating@redhat.com>
- rebuilt
* Mon Apr  4 2005 Jeremy Katz <katzj@redhat.com> - 0.98.39-3
- pdf docs are duplication of html, txt and postscript
* Fri Apr  1 2005 Jindrich Novy <jnovy@redhat.com> 0.98.39-2
- fix yet another vsprintf buffer overflow (#152963)
* Thu Mar 31 2005 Jindrich Novy <jnovy@redhat.com> 0.98.39-1
- update to 0.98.39
- add BuildRequires ghostscript, texinfo to doc subpackage (#110584)
- generate also PDF documentation for nasm (#88431)
- new release fixes CAN-2004-1287 (#143052)
* Tue Jun 15 2004 Elliot Lee <sopwith@redhat.com>
- rebuilt
* Fri Feb 13 2004 Elliot Lee <sopwith@redhat.com>
- rebuilt
* Fri Sep 26 2003 Florian La Roche <Florian.LaRoche@redhat.de>
- update to 0.98.38 and specfile cleanup
* Wed Jun  4 2003 Elliot Lee <sopwith@redhat.com>
- rebuilt
* Wed Jan 22 2003 Tim Powers <timp@redhat.com>
- rebuilt
* Tue Dec 17 2002 Phil Knirsch <pknirsch@redhat.com> 0.98.35-2
- Removed ExclusiveArch tag.
- Fixed typo in homepage URL.
* Wed Dec 11 2002 Thomas Woerner <twoerner@redhat.com> 0.98.35-1
- new version 0.98.35
- nasm has new homepage (#77323)
* Fri Nov 29 2002 Tim Powers <timp@redhat.com> 0.98.34-2
- fix %%%%doc list
- remove unpackaged files from the buildroot
* Mon Sep 16 2002 Jeremy Katz <katzj@redhat.com> 0.98.34-1hammer
- add x86_64 to ExclusiveArch list
* Tue Jul 23 2002 Trond Eivind Glomsrød <teg@redhat.com> 0.98.34-1
- 0.98.34
* Fri Jun 21 2002 Tim Powers <timp@redhat.com>
- automated rebuild
* Sun May 26 2002 Tim Powers <timp@redhat.com>
- automated rebuild
* Tue May 21 2002 Trond Eivind Glomsrød <teg@redhat.com> 0.98.32-1
- 0.98.32
- Various doc files have changed names/been removed/added
- New download location (after the license change, it's at sourceforge)
- The new version is LGPL
- Only build on x86 (#65255)
* Tue Feb 26 2002 Trond Eivind Glomsrød <teg@redhat.com> 0.98.22-2
- Rebuild
* Mon Jan 21 2002 Bernhard Rosenkraenzer <bero@redhat.com>
- Update to 0.98.22 to fix bogus code generation in SDL
- Fix spec file, handle RPM_OPT_FLAGS
* Wed Jan  9 2002 Tim Powers <timp@redhat.com>
- automated rebuild
* Tue Aug  7 2001 Trond Eivind Glomsrød <teg@redhat.com>
- Updated patch from H.J. Lu for bogus elf generation (#45986,
  verified by reporter)
* Thu Apr 26 2001 Trond Eivind Glomsrød <teg@redhat.com>
- Updated patch for bogus elf generation from hjl@gnu.org
* Tue Feb 13 2001 Trond Eivind Glomsrød <teg@redhat.com>
- Add patch from H.J. Lu to avoid creating bogus elf objects (#27489)
* Wed Jul 12 2000 Prospector <bugzilla@redhat.com>
- automatic rebuild
* Tue Jun 13 2000 Trond Eivind Glomsrød <teg@redhat.com>
- rewrote almost everything. The old specfile was bad, bad, bad.
  Really Bad.
* Tue Apr  4 2000 Erik Troan <ewt@redhat.com>
- moved to distribution (syslinux needs it)
- gzipped man pages
* Thu Dec  2 1999 Preston Brown <pbrown@redhat.com>
- adopted from one of the best .spec files I have seen in a long time. :)
